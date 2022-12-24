# REST API Server for

a minimal c++ Data Science REST API.

 [![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)

## Overview
This is a REST API for data science tasks, written in C++. 
It provides a set of endpoints for performing various data science tasks such as basic linear algebra and linear regression. 

It uses the [Pistache](https://github.com/oktal/pistache) Framework.

## Files organization

- `api`: 
This folder contains the handlers for each method specified in the OpenAPI definition. 
Every handler extracts the path and body parameters (if any) from the requests and tries to parse and possibly validate them.


- `impl`: As written above, the implementation folder contains the corresponding implementation class,
which extends the main API class and implements the abstract methods.

Every method receives the path and body parameters as constant reference variables and a reference to the response object, 

- `model`: This folder contains the corresponding class for every object schema found in the OpenAPI specification.

The main folder contains also a file with a main that can be used to start the server.
Of course, is you should customize this file based on your needs

## Build 

make will primarily delegate to cmake. artifacts are copied from build to dist

```
make all
```

Once compiled run the server:

```
cd dist
./rest-cpp-data-science
```


# or use docker

```
make docker-run
```

# API Reference
 This API is documented in openapi/openapi.yaml

 
 # Contribute

 If you would like to contribute, here are some ways you could do so:
 
 * Report bugs: 

If you find any issues with the API, you can report them by creating an issue in the repository's issue tracker. Be sure to include a detailed description of the issue and steps to reproduce it.

* Suggest enhancements: 

If you have an idea for a new feature or improvement for the API, you can suggest it by creating an issue in the repository's issue tracker. Be sure to include a detailed description of your idea and how it would benefit users of the API.


* Submit pull requests: 

If you have code changes that you would like to contribute to the API, you can submit a pull request. Be sure to follow the repository's contribution guidelines and include a detailed description of your changes.

* Improve documentation: 

If you find any errors or areas for improvement in the API's documentation, you can submit a pull request to fix them.

* Spread the word: 

If you find the data science REST API useful, consider sharing it with others who may also find it useful. You can do this by sharing the repository on social media or mentioning it in relevant forums or online communities.