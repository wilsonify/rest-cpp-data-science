FROM rest-cpp-data-science-builder:latest as builder
COPY . /usr/src/app
WORKDIR /usr/src/app
RUN make all
RUN ldd build/api-server

FROM rest-cpp-data-science-base:latest
COPY --from=builder /usr/src/app/dist /usr/src/app/dist
WORKDIR /usr/src/app/dist
EXPOSE 8080
ENTRYPOINT [ "./api-server" ]
