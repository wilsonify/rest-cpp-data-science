ver_file = echo "1.0.0" > $(1) && date +%Y-%m-%d >> $(1)

all: clean dist/rest-cpp-data-science

clean:
	rm -rf build
	rm -rf dist	

generate:
	docker run --rm \
	-u $(shell id -u):$(shell id -g) \
	-v "$(shell pwd):/local" \
	openapitools/openapi-generator-cli:latest generate \
	-i /local/openapi/openapi.yaml \
	-g cpp-pistache-server \
	-o /local/generated

all-clients: generate-cpp-restsdk generate-python-nextgen

generate-cpp-restsdk:
	docker run --rm \
	-u $(shell id -u):$(shell id -g) \
	-v "$(shell pwd):/local" \
	openapitools/openapi-generator-cli:latest generate \
	-i /local/openapi/openapi.yaml \
	-g  cpp-restsdk \
	-o /local/clients/cpp-restsdk

generate-python-nextgen:
	docker run --rm \
	-u $(shell id -u):$(shell id -g) \
	-v "$(shell pwd):/local" \
	openapitools/openapi-generator-cli:latest generate \
	-i /local/openapi/openapi.yaml \
	-g python-nextgen \
	-o /local/tests/python-nextgen


build/VERSION.txt:
	mkdir -p build && $(call ver_file, $@)

dist/VERSION.txt:
	mkdir -p dist && $(call ver_file, $@)

external/googletest/CMakeLists.txt:
	git submodule update --init --recursive 

build/makefile: build/VERSION.txt external/googletest/CMakeLists.txt
	cd build && cmake .. -G Ninja

build/rest-cpp-data-science: build/makefile
	cd build && ninja

dist/rest-cpp-data-science: dist/VERSION.txt build/rest-cpp-data-science
	cp build/rest-cpp-data-science dist

build/rest-cpp-data-science-base.txt: build/VERSION.txt
	docker build -f Dockerfile-base -t rest-cpp-data-science-base:latest . && $(call ver_file, $@)

build/rest-cpp-data-science-builder.txt:  build/rest-cpp-data-science-base.txt
	docker build -f Dockerfile-builder -t rest-cpp-data-science-builder:latest . && $(call ver_file, $@)

build/rest-cpp-data-science.txt: build/rest-cpp-data-science-builder.txt
	docker build -t rest-cpp-data-science:latest . && $(call ver_file, $@)

docker-run: build/rest-cpp-data-science.txt
	docker run --rm --name rest-cpp-data-science -p 49153:8080 rest-cpp-data-science:latest
