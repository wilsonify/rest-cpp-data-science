<a name="__pageTop"></a>
# openapi_client_py.apis.tags.gradient_descent_api.GradientDescentApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**difference_quotient_post**](#difference_quotient_post) | **post** /difference_quotient | 
[**estimate_gradient_post**](#estimate_gradient_post) | **post** /estimate_gradient | 
[**in_random_order_post**](#in_random_order_post) | **post** /in_random_order | 
[**maximize_batch_post**](#maximize_batch_post) | **post** /maximize_batch | 
[**maximize_stochastic_post**](#maximize_stochastic_post) | **post** /maximize_stochastic | 
[**minimize_batch_post**](#minimize_batch_post) | **post** /minimize_batch | 
[**minimize_stochastic_post**](#minimize_stochastic_post) | **post** /minimize_stochastic | 
[**partial_difference_quotient_post**](#partial_difference_quotient_post) | **post** /partial_difference_quotient | 

# **difference_quotient_post**
<a name="difference_quotient_post"></a>
> DifferenceQuotientOutput difference_quotient_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import gradient_descent_api
from openapi_client_py.model.difference_quotient_input import DifferenceQuotientInput
from openapi_client_py.model.difference_quotient_output import DifferenceQuotientOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = gradient_descent_api.GradientDescentApi(api_client)

    # example passing only optional values
    body = DifferenceQuotientInput(
        x=3.14,
        h=3.14,
    )
    try:
        api_response = api_instance.difference_quotient_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling GradientDescentApi->difference_quotient_post: %s\n" % e)
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
[**DifferenceQuotientInput**](../../models/DifferenceQuotientInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#difference_quotient_post.ApiResponseFor200) | Description of this response.

#### difference_quotient_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**DifferenceQuotientOutput**](../../models/DifferenceQuotientOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **estimate_gradient_post**
<a name="estimate_gradient_post"></a>
> EstimateGradientOutput estimate_gradient_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import gradient_descent_api
from openapi_client_py.model.estimate_gradient_input import EstimateGradientInput
from openapi_client_py.model.estimate_gradient_output import EstimateGradientOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = gradient_descent_api.GradientDescentApi(api_client)

    # example passing only optional values
    body = EstimateGradientInput(
        v=[10.0, 2.0],
        h=1,
    )
    try:
        api_response = api_instance.estimate_gradient_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling GradientDescentApi->estimate_gradient_post: %s\n" % e)
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
[**EstimateGradientInput**](../../models/EstimateGradientInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#estimate_gradient_post.ApiResponseFor200) | Description of this response.

#### estimate_gradient_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**EstimateGradientOutput**](../../models/EstimateGradientOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **in_random_order_post**
<a name="in_random_order_post"></a>
> InRandomOrderOutput in_random_order_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import gradient_descent_api
from openapi_client_py.model.in_random_order_output import InRandomOrderOutput
from openapi_client_py.model.in_random_order_input import InRandomOrderInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = gradient_descent_api.GradientDescentApi(api_client)

    # example passing only optional values
    body = InRandomOrderInput(
        data=[
            3.14
        ],
    )
    try:
        api_response = api_instance.in_random_order_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling GradientDescentApi->in_random_order_post: %s\n" % e)
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
[**InRandomOrderInput**](../../models/InRandomOrderInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#in_random_order_post.ApiResponseFor200) | Description of this response.

#### in_random_order_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**InRandomOrderOutput**](../../models/InRandomOrderOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **maximize_batch_post**
<a name="maximize_batch_post"></a>
> MaximizeBatchOutput maximize_batch_post()



use gradient descent to find theta that minimizes target function

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import gradient_descent_api
from openapi_client_py.model.maximize_batch_output import MaximizeBatchOutput
from openapi_client_py.model.maximize_batch_input import MaximizeBatchInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = gradient_descent_api.GradientDescentApi(api_client)

    # example passing only optional values
    body = MaximizeBatchInput(
        x=[[1, 2, 3], [2, 3, 4], [5, 6, 7]],
    )
    try:
        api_response = api_instance.maximize_batch_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling GradientDescentApi->maximize_batch_post: %s\n" % e)
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
[**MaximizeBatchInput**](../../models/MaximizeBatchInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#maximize_batch_post.ApiResponseFor200) | Description of this response.

#### maximize_batch_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**MaximizeBatchOutput**](../../models/MaximizeBatchOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **maximize_stochastic_post**
<a name="maximize_stochastic_post"></a>
> MaximizeStochasticOutput maximize_stochastic_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import gradient_descent_api
from openapi_client_py.model.maximize_stochastic_input import MaximizeStochasticInput
from openapi_client_py.model.maximize_stochastic_output import MaximizeStochasticOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = gradient_descent_api.GradientDescentApi(api_client)

    # example passing only optional values
    body = MaximizeStochasticInput(
        x=[[1, 49, 4, 0], [1, 41, 9, 0], [1, 40, 8, 0], [1, 25, 6, 0], [1, 21, 1, 0], [1, 21, 0, 0], [1, 19, 3, 0], [1, 19, 0, 0], [1, 18, 9, 0], [1, 18, 8, 0]],
        y=[68.77, 51.25, 52.08, 38.36, 44.54, 57.13, 51.4, 41.42, 31.22, 34.76],
    )
    try:
        api_response = api_instance.maximize_stochastic_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling GradientDescentApi->maximize_stochastic_post: %s\n" % e)
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
[**MaximizeStochasticInput**](../../models/MaximizeStochasticInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#maximize_stochastic_post.ApiResponseFor200) | Description of this response.

#### maximize_stochastic_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**MaximizeStochasticOutput**](../../models/MaximizeStochasticOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **minimize_batch_post**
<a name="minimize_batch_post"></a>
> MinimizeBatchOutput minimize_batch_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import gradient_descent_api
from openapi_client_py.model.minimize_batch_input import MinimizeBatchInput
from openapi_client_py.model.minimize_batch_output import MinimizeBatchOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = gradient_descent_api.GradientDescentApi(api_client)

    # example passing only optional values
    body = MinimizeBatchInput(
        x=3.14,
    )
    try:
        api_response = api_instance.minimize_batch_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling GradientDescentApi->minimize_batch_post: %s\n" % e)
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
[**MinimizeBatchInput**](../../models/MinimizeBatchInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#minimize_batch_post.ApiResponseFor200) | Description of this response.

#### minimize_batch_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**MinimizeBatchOutput**](../../models/MinimizeBatchOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **minimize_stochastic_post**
<a name="minimize_stochastic_post"></a>
> MinimizeStochasticOutput minimize_stochastic_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import gradient_descent_api
from openapi_client_py.model.minimize_stochastic_output import MinimizeStochasticOutput
from openapi_client_py.model.minimize_stochastic_input import MinimizeStochasticInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = gradient_descent_api.GradientDescentApi(api_client)

    # example passing only optional values
    body = MinimizeStochasticInput(
        x=[[1, 49, 4, 0], [1, 41, 9, 0], [1, 40, 8, 0], [1, 25, 6, 0], [1, 21, 1, 0], [1, 21, 0, 0], [1, 19, 3, 0], [1, 19, 0, 0], [1, 18, 9, 0], [1, 18, 8, 0]],
        y=[68.77, 51.25, 52.08, 38.36, 44.54, 57.13, 51.4, 41.42, 31.22, 34.76],
    )
    try:
        api_response = api_instance.minimize_stochastic_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling GradientDescentApi->minimize_stochastic_post: %s\n" % e)
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
[**MinimizeStochasticInput**](../../models/MinimizeStochasticInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#minimize_stochastic_post.ApiResponseFor200) | Description of this response.

#### minimize_stochastic_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**MinimizeStochasticOutput**](../../models/MinimizeStochasticOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **partial_difference_quotient_post**
<a name="partial_difference_quotient_post"></a>
> PartialDifferenceQuotientOutput partial_difference_quotient_post()



add h to just the i-th element of v

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import gradient_descent_api
from openapi_client_py.model.partial_difference_quotient_input import PartialDifferenceQuotientInput
from openapi_client_py.model.partial_difference_quotient_output import PartialDifferenceQuotientOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = gradient_descent_api.GradientDescentApi(api_client)

    # example passing only optional values
    body = PartialDifferenceQuotientInput(
        v=[10.0, 2.0],
        i=0,
        h=1,
    )
    try:
        api_response = api_instance.partial_difference_quotient_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling GradientDescentApi->partial_difference_quotient_post: %s\n" % e)
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
[**PartialDifferenceQuotientInput**](../../models/PartialDifferenceQuotientInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#partial_difference_quotient_post.ApiResponseFor200) | v with h added to just the i-th element

#### partial_difference_quotient_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**PartialDifferenceQuotientOutput**](../../models/PartialDifferenceQuotientOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

