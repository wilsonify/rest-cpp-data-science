<a name="__pageTop"></a>
# openapi_client_py.apis.tags.stats_api.StatsApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**bucketize_post**](#bucketize_post) | **post** /bucketize | 
[**correlation_matrix_post**](#correlation_matrix_post) | **post** /correlation_matrix | 
[**correlation_post**](#correlation_post) | **post** /correlation | 
[**covariance_post**](#covariance_post) | **post** /covariance | 
[**data_range_post**](#data_range_post) | **post** /data_range | 
[**de_mean_post**](#de_mean_post) | **post** /de_mean | 
[**interquartile_range_post**](#interquartile_range_post) | **post** /interquartile_range | 
[**mean_post**](#mean_post) | **post** /mean | 
[**median_post**](#median_post) | **post** /median | 
[**mode_post**](#mode_post) | **post** /mode | 
[**quantile_post**](#quantile_post) | **post** /quantile | 
[**recall_post**](#recall_post) | **post** /recall | 
[**standard_deviation_post**](#standard_deviation_post) | **post** /standard_deviation | 
[**variance_post**](#variance_post) | **post** /variance | 

# **bucketize_post**
<a name="bucketize_post"></a>
> BucketizeOutput bucketize_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.bucketize_output import BucketizeOutput
from openapi_client_py.model.bucketize_input import BucketizeInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = BucketizeInput(
        point=3.14,
        bucket_size=3.14,
    )
    try:
        api_response = api_instance.bucketize_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->bucketize_post: %s\n" % e)
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
[**BucketizeInput**](../../models/BucketizeInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#bucketize_post.ApiResponseFor200) | Description of this response.

#### bucketize_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**BucketizeOutput**](../../models/BucketizeOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **correlation_matrix_post**
<a name="correlation_matrix_post"></a>
> CorrelationMatrixOutput correlation_matrix_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.correlation_matrix_output import CorrelationMatrixOutput
from openapi_client_py.model.correlation_matrix_input import CorrelationMatrixInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = CorrelationMatrixInput(
        x=[
            3.14
        ],
,
    )
    try:
        api_response = api_instance.correlation_matrix_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->correlation_matrix_post: %s\n" % e)
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
[**CorrelationMatrixInput**](../../models/CorrelationMatrixInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#correlation_matrix_post.ApiResponseFor200) | Description of this response.

#### correlation_matrix_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**CorrelationMatrixOutput**](../../models/CorrelationMatrixOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **correlation_post**
<a name="correlation_post"></a>
> CorrelationOutput correlation_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.correlation_input import CorrelationInput
from openapi_client_py.model.correlation_output import CorrelationOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = CorrelationInput(
        data=[
            [
                3.14
            ]
        ],
    )
    try:
        api_response = api_instance.correlation_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->correlation_post: %s\n" % e)
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
[**CorrelationInput**](../../models/CorrelationInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#correlation_post.ApiResponseFor200) | Description of this response.

#### correlation_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**CorrelationOutput**](../../models/CorrelationOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **covariance_post**
<a name="covariance_post"></a>
> CovarianceOutput covariance_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.covariance_output import CovarianceOutput
from openapi_client_py.model.covariance_input import CovarianceInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = CovarianceInput(
        x=[
            3.14
        ],
,
    )
    try:
        api_response = api_instance.covariance_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->covariance_post: %s\n" % e)
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
[**CovarianceInput**](../../models/CovarianceInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#covariance_post.ApiResponseFor200) | Description of this response.

#### covariance_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**CovarianceOutput**](../../models/CovarianceOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **data_range_post**
<a name="data_range_post"></a>
> DataRangeOutput data_range_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.data_range_input import DataRangeInput
from openapi_client_py.model.data_range_output import DataRangeOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = DataRangeInput(
        x=[
            3.14
        ],
    )
    try:
        api_response = api_instance.data_range_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->data_range_post: %s\n" % e)
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
[**DataRangeInput**](../../models/DataRangeInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#data_range_post.ApiResponseFor200) | Description of this response.

#### data_range_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**DataRangeOutput**](../../models/DataRangeOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **de_mean_post**
<a name="de_mean_post"></a>
> DeMeanOutput de_mean_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.de_mean_output import DeMeanOutput
from openapi_client_py.model.de_mean_input import DeMeanInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = DeMeanInput(
        x=[
            3.14
        ],
    )
    try:
        api_response = api_instance.de_mean_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->de_mean_post: %s\n" % e)
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
[**DeMeanInput**](../../models/DeMeanInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#de_mean_post.ApiResponseFor200) | Description of this response.

#### de_mean_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**DeMeanOutput**](../../models/DeMeanOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **interquartile_range_post**
<a name="interquartile_range_post"></a>
> int, float interquartile_range_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.interquartile_range_input import InterquartileRangeInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = InterquartileRangeInput(
        x=[
            3.14
        ],
    )
    try:
        api_response = api_instance.interquartile_range_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->interquartile_range_post: %s\n" % e)
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
[**InterquartileRangeInput**](../../models/InterquartileRangeInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#interquartile_range_post.ApiResponseFor200) | Description of this response.

#### interquartile_range_post.ApiResponseFor200
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

# **mean_post**
<a name="mean_post"></a>
> int, float mean_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.mean_input import MeanInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = MeanInput(
        x=[
            3.14
        ],
    )
    try:
        api_response = api_instance.mean_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->mean_post: %s\n" % e)
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
[**MeanInput**](../../models/MeanInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#mean_post.ApiResponseFor200) | Description of this response.

#### mean_post.ApiResponseFor200
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

# **median_post**
<a name="median_post"></a>
> int, float median_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.median_input import MedianInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = MedianInput(
        x=[
            3.14
        ],
    )
    try:
        api_response = api_instance.median_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->median_post: %s\n" % e)
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
[**MedianInput**](../../models/MedianInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#median_post.ApiResponseFor200) | Description of this response.

#### median_post.ApiResponseFor200
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

# **mode_post**
<a name="mode_post"></a>
> ModeOutput mode_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.mode_output import ModeOutput
from openapi_client_py.model.mode_input import ModeInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = ModeInput(
        x=[
            3.14
        ],
    )
    try:
        api_response = api_instance.mode_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->mode_post: %s\n" % e)
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
[**ModeInput**](../../models/ModeInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#mode_post.ApiResponseFor200) | Description of this response.

#### mode_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**ModeOutput**](../../models/ModeOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

# **quantile_post**
<a name="quantile_post"></a>
> int, float quantile_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.quantile_input import QuantileInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = QuantileInput(
        x=[
            3.14
        ],
    )
    try:
        api_response = api_instance.quantile_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->quantile_post: %s\n" % e)
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
[**QuantileInput**](../../models/QuantileInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#quantile_post.ApiResponseFor200) | Description of this response.

#### quantile_post.ApiResponseFor200
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

# **recall_post**
<a name="recall_post"></a>
> int, float recall_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.recall_input import RecallInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = RecallInput(
        tp=3.14,
        fp=3.14,
        fn=3.14,
        tn=3.14,
    )
    try:
        api_response = api_instance.recall_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->recall_post: %s\n" % e)
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
[**RecallInput**](../../models/RecallInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#recall_post.ApiResponseFor200) | Description of this response.

#### recall_post.ApiResponseFor200
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

# **standard_deviation_post**
<a name="standard_deviation_post"></a>
> int, float standard_deviation_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.standard_deviation_input import StandardDeviationInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = StandardDeviationInput(
        x=[
            3.14
        ],
    )
    try:
        api_response = api_instance.standard_deviation_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->standard_deviation_post: %s\n" % e)
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
[**StandardDeviationInput**](../../models/StandardDeviationInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#standard_deviation_post.ApiResponseFor200) | Description of this response.

#### standard_deviation_post.ApiResponseFor200
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

# **variance_post**
<a name="variance_post"></a>
> int, float variance_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import stats_api
from openapi_client_py.model.variance_input import VarianceInput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = stats_api.StatsApi(api_client)

    # example passing only optional values
    body = VarianceInput(
        x=[
            3.14
        ],
    )
    try:
        api_response = api_instance.variance_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling StatsApi->variance_post: %s\n" % e)
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
[**VarianceInput**](../../models/VarianceInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#variance_post.ApiResponseFor200) | Description of this response.

#### variance_post.ApiResponseFor200
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

