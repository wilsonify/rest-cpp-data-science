<a name="__pageTop"></a>
# openapi_client_py.apis.tags.machine_learning_api.MachineLearningApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**accracy_post**](#accracy_post) | **post** /acc&#x60;racy | 
[**f1_score_post**](#f1_score_post) | **post** /f1_score | 
[**precision_post**](#precision_post) | **post** /precision | 
[**split_data_post**](#split_data_post) | **post** /split_data | 
[**train_test_split_post**](#train_test_split_post) | **post** /train_test_split | 

# **accracy_post**
<a name="accracy_post"></a>
> int, float accracy_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import machine_learning_api
from openapi_client_py.model.accuracy_input import AccuracyInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = machine_learning_api.MachineLearningApi(api_client)

    # example passing only optional values
    body = AccuracyInput(
        tp=3.14,
        fp=3.14,
        fn=3.14,
        tn=3.14,
    )
    try:
        api_response = api_instance.accracy_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling MachineLearningApi->accracy_post: %s\n" % e)
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
[**AccuracyInput**](../../models/AccuracyInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#accracy_post.ApiResponseFor200) | Description of this response.

#### accracy_post.ApiResponseFor200
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

# **f1_score_post**
<a name="f1_score_post"></a>
> int, float f1_score_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import machine_learning_api
from openapi_client_py.model.f1_score_input import F1ScoreInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = machine_learning_api.MachineLearningApi(api_client)

    # example passing only optional values
    body = F1ScoreInput(
        tp=3.14,
        fp=3.14,
        fn=3.14,
        tn=3.14,
    )
    try:
        api_response = api_instance.f1_score_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling MachineLearningApi->f1_score_post: %s\n" % e)
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
[**F1ScoreInput**](../../models/F1ScoreInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#f1_score_post.ApiResponseFor200) | Description of this response.

#### f1_score_post.ApiResponseFor200
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

# **precision_post**
<a name="precision_post"></a>
> int, float precision_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import machine_learning_api
from openapi_client_py.model.precision_input import PrecisionInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = machine_learning_api.MachineLearningApi(api_client)

    # example passing only optional values
    body = PrecisionInput(
        tp=3.14,
        fp=3.14,
        fn=3.14,
        tn=3.14,
    )
    try:
        api_response = api_instance.precision_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling MachineLearningApi->precision_post: %s\n" % e)
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
[**PrecisionInput**](../../models/PrecisionInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#precision_post.ApiResponseFor200) | Description of this response.

#### precision_post.ApiResponseFor200
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

# **split_data_post**
<a name="split_data_post"></a>
> SplitDataOutput split_data_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import machine_learning_api
from openapi_client_py.model.split_data_input import SplitDataInput
from openapi_client_py.model.split_data_output import SplitDataOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = machine_learning_api.MachineLearningApi(api_client)

    # example passing only optional values
    body = SplitDataInput(
        data=[
            [
                3.14
            ]
        ],
    )
    try:
        api_response = api_instance.split_data_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling MachineLearningApi->split_data_post: %s\n" % e)
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
[**SplitDataInput**](../../models/SplitDataInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#split_data_post.ApiResponseFor200) | Description of this response.

#### split_data_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**SplitDataOutput**](../../models/SplitDataOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **train_test_split_post**
<a name="train_test_split_post"></a>
> TrainTestSplitOutput train_test_split_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import machine_learning_api
from openapi_client_py.model.train_test_split_input import TrainTestSplitInput
from openapi_client_py.model.train_test_split_output import TrainTestSplitOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = machine_learning_api.MachineLearningApi(api_client)

    # example passing only optional values
    body = TrainTestSplitInput(
        x=[
            [
                3.14
            ]
        ],
,
        p=3.14,
    )
    try:
        api_response = api_instance.train_test_split_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling MachineLearningApi->train_test_split_post: %s\n" % e)
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
[**TrainTestSplitInput**](../../models/TrainTestSplitInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#train_test_split_post.ApiResponseFor200) | Description of this response.

#### train_test_split_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**TrainTestSplitOutput**](../../models/TrainTestSplitOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

