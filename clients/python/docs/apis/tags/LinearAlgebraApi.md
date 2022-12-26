<a name="__pageTop"></a>
# openapi_client_py.apis.tags.linear_algebra_api.LinearAlgebraApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**distance_post**](#distance_post) | **post** /distance | 
[**dot_post**](#dot_post) | **post** /dot | 
[**get_column_post**](#get_column_post) | **post** /get_column | 
[**get_row_post**](#get_row_post) | **post** /get_row | 
[**magnitude_post**](#magnitude_post) | **post** /magnitude | 
[**matrix_add_post**](#matrix_add_post) | **post** /matrix_add | 
[**scalar_multiply_post**](#scalar_multiply_post) | **post** /scalar_multiply | 
[**shape_post**](#shape_post) | **post** /shape | 
[**squared_distance_post**](#squared_distance_post) | **post** /squared_distance | 
[**sum_of_squares_post**](#sum_of_squares_post) | **post** /sum_of_squares | 
[**vector_add_post**](#vector_add_post) | **post** /vector_add | 
[**vector_mean_post**](#vector_mean_post) | **post** /vector_mean | 
[**vector_subtract_post**](#vector_subtract_post) | **post** /vector_subtract | 
[**vector_sum_post**](#vector_sum_post) | **post** /vector_sum | 

# **distance_post**
<a name="distance_post"></a>
> DistanceOutput distance_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.distance_output import DistanceOutput
from openapi_client_py.model.distance_input import DistanceInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = DistanceInput(
        v=[
            3.14
        ],
,
    )
    try:
        api_response = api_instance.distance_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->distance_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**DistanceInput**](../../models/DistanceInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#distance_post.ApiResponseFor200) | Description of this response.

#### distance_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**DistanceOutput**](../../models/DistanceOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **dot_post**
<a name="dot_post"></a>
> DotOutput dot_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.dot_output import DotOutput
from openapi_client_py.model.dot_input import DotInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = DotInput(
        v=[
            3.14
        ],
,
    )
    try:
        api_response = api_instance.dot_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->dot_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**DotInput**](../../models/DotInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#dot_post.ApiResponseFor200) | Description of this response.

#### dot_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**DotOutput**](../../models/DotOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **get_column_post**
<a name="get_column_post"></a>
> GetColumnOutput get_column_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.get_column_output import GetColumnOutput
from openapi_client_py.model.get_column_input import GetColumnInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = GetColumnInput(
        mat=[
            [
                3.14
            ]
        ],
        col=3.14,
    )
    try:
        api_response = api_instance.get_column_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->get_column_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**GetColumnInput**](../../models/GetColumnInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#get_column_post.ApiResponseFor200) | Description of this response.

#### get_column_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**GetColumnOutput**](../../models/GetColumnOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **get_row_post**
<a name="get_row_post"></a>
> GetRowOutput get_row_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.get_row_input import GetRowInput
from openapi_client_py.model.get_row_output import GetRowOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = GetRowInput(
        mat=[
            [
                3.14
            ]
        ],
        row=3.14,
    )
    try:
        api_response = api_instance.get_row_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->get_row_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**GetRowInput**](../../models/GetRowInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#get_row_post.ApiResponseFor200) | Description of this response.

#### get_row_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**GetRowOutput**](../../models/GetRowOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **magnitude_post**
<a name="magnitude_post"></a>
> int, float magnitude_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.magnitude_input import MagnitudeInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = MagnitudeInput(
        v=[
            3.14
        ],
    )
    try:
        api_response = api_instance.magnitude_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->magnitude_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**MagnitudeInput**](../../models/MagnitudeInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#magnitude_post.ApiResponseFor200) | Description of this response.

#### magnitude_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson

## Model Type Info
Input Type | Accessed Type | Description | Notes
------------ | ------------- | ------------- | -------------
decimal.Decimal, int, float,  | decimal.Decimal,  |  | 

### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **matrix_add_post**
<a name="matrix_add_post"></a>
> MatrixAddOutput matrix_add_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.matrix_add_input import MatrixAddInput
from openapi_client_py.model.matrix_add_output import MatrixAddOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = MatrixAddInput(
        mat1=[
            [
                3.14
            ]
        ],
,
    )
    try:
        api_response = api_instance.matrix_add_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->matrix_add_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**MatrixAddInput**](../../models/MatrixAddInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#matrix_add_post.ApiResponseFor200) | Description of this response.

#### matrix_add_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**MatrixAddOutput**](../../models/MatrixAddOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **scalar_multiply_post**
<a name="scalar_multiply_post"></a>
> ScalarMultiplyOutput scalar_multiply_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.scalar_multiply_input import ScalarMultiplyInput
from openapi_client_py.model.scalar_multiply_output import ScalarMultiplyOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = ScalarMultiplyInput(
        c=3.14,
        mat=[
            [
                3.14
            ]
        ],
    )
    try:
        api_response = api_instance.scalar_multiply_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->scalar_multiply_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**ScalarMultiplyInput**](../../models/ScalarMultiplyInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#scalar_multiply_post.ApiResponseFor200) | Description of this response.

#### scalar_multiply_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**ScalarMultiplyOutput**](../../models/ScalarMultiplyOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **shape_post**
<a name="shape_post"></a>
> ShapeOutput shape_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.shape_output import ShapeOutput
from openapi_client_py.model.shape_input import ShapeInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = ShapeInput(
        mat=[
            [
                3.14
            ]
        ],
    )
    try:
        api_response = api_instance.shape_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->shape_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**ShapeInput**](../../models/ShapeInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#shape_post.ApiResponseFor200) | Description of this response.

#### shape_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**ShapeOutput**](../../models/ShapeOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **squared_distance_post**
<a name="squared_distance_post"></a>
> SquaredDistanceOutput squared_distance_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.squared_distance_input import SquaredDistanceInput
from openapi_client_py.model.squared_distance_output import SquaredDistanceOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = SquaredDistanceInput(
        v=[
            3.14
        ],
,
    )
    try:
        api_response = api_instance.squared_distance_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->squared_distance_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**SquaredDistanceInput**](../../models/SquaredDistanceInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#squared_distance_post.ApiResponseFor200) | Description of this response.

#### squared_distance_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**SquaredDistanceOutput**](../../models/SquaredDistanceOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **sum_of_squares_post**
<a name="sum_of_squares_post"></a>
> int, float sum_of_squares_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.sum_of_squares_input import SumOfSquaresInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = SumOfSquaresInput(
        x=[
            3.14
        ],
    )
    try:
        api_response = api_instance.sum_of_squares_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->sum_of_squares_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**SumOfSquaresInput**](../../models/SumOfSquaresInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#sum_of_squares_post.ApiResponseFor200) | Description of this response.

#### sum_of_squares_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson

## Model Type Info
Input Type | Accessed Type | Description | Notes
------------ | ------------- | ------------- | -------------
decimal.Decimal, int, float,  | decimal.Decimal,  |  | 

### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **vector_add_post**
<a name="vector_add_post"></a>
> VectorAddOutput vector_add_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.vector_add_output import VectorAddOutput
from openapi_client_py.model.vector_add_input import VectorAddInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = VectorAddInput(
        v=[
            3.14
        ],
,
    )
    try:
        api_response = api_instance.vector_add_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->vector_add_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**VectorAddInput**](../../models/VectorAddInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#vector_add_post.ApiResponseFor200) | Description of this response.

#### vector_add_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**VectorAddOutput**](../../models/VectorAddOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **vector_mean_post**
<a name="vector_mean_post"></a>
> VectorMeanOutput vector_mean_post()



compute the vector whose i-th element is the mean of the i-th elements of the input vectors

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.vector_mean_output import VectorMeanOutput
from openapi_client_py.model.vector_mean_input import VectorMeanInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = VectorMeanInput(
        v=[
            3.14
        ],
,
    )
    try:
        api_response = api_instance.vector_mean_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->vector_mean_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**VectorMeanInput**](../../models/VectorMeanInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#vector_mean_post.ApiResponseFor200) | success

#### vector_mean_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**VectorMeanOutput**](../../models/VectorMeanOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **vector_subtract_post**
<a name="vector_subtract_post"></a>
> VectorSubtractOutput vector_subtract_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.vector_subtract_output import VectorSubtractOutput
from openapi_client_py.model.vector_subtract_input import VectorSubtractInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = VectorSubtractInput(
        v=[
            3.14
        ],
,
    )
    try:
        api_response = api_instance.vector_subtract_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->vector_subtract_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**VectorSubtractInput**](../../models/VectorSubtractInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#vector_subtract_post.ApiResponseFor200) | Description of this response.

#### vector_subtract_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**VectorSubtractOutput**](../../models/VectorSubtractOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **vector_sum_post**
<a name="vector_sum_post"></a>
> VectorSumOutput vector_sum_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import linear_algebra_api
from openapi_client_py.model.vector_sum_input import VectorSumInput
from openapi_client_py.model.vector_sum_output import VectorSumOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = linear_algebra_api.LinearAlgebraApi(api_client)

    # example passing only optional values
    body = VectorSumInput(
        v=[
            3.14
        ],
,
    )
    try:
        api_response = api_instance.vector_sum_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling LinearAlgebraApi->vector_sum_post: %s\n" % e)
```
### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
body | typing.Union[SchemaForRequestBodyApplicationJson, Unset] | optional, default is unset |
content_type | str | optional, default is 'application/json' | Selects the schema and serialization of the request body
accept_content_types | typing.Tuple[str] | default is ('application/json', ) | Tells the server the content type(s) that are accepted by the client
stream | bool | default is False | if True then the response.content will be streamed and loaded from a file like object. When downloading a file, set this to True to force the code to deserialize the content to a FileSchema file
timeout | typing.Optional[typing.Union[int, typing.Tuple]] | default is None | the timeout used by the rest client
skip_deserialization | bool | default is False | when True, headers and body will be unset and an instance of api_client.ApiResponseWithoutDeserialization will be returned

### body

# SchemaForRequestBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**VectorSumInput**](../../models/VectorSumInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#vector_sum_post.ApiResponseFor200) | Description of this response.

#### vector_sum_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**VectorSumOutput**](../../models/VectorSumOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

