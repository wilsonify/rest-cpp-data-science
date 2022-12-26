<a name="__pageTop"></a>
# openapi_client_py.apis.tags.mysqrt_api.MysqrtApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sqrt_post**](#sqrt_post) | **post** /sqrt | 

# **sqrt_post**
<a name="sqrt_post"></a>
> SqrtOutput sqrt_post()



Description of the endpoint

### Example

```python
import openapi_client_py
from openapi_client_py.apis.tags import mysqrt_api
from openapi_client_py.model.sqrt_input import SqrtInput
from openapi_client_py.model.sqrt_output import SqrtOutput
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_py.Configuration(
    host = "http://localhost"
)

# Enter a context with an instance of the API client
with openapi_client_py.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = mysqrt_api.MysqrtApi(api_client)

    # example passing only optional values
    body = SqrtInput(
        x=3.14,
    )
    try:
        api_response = api_instance.sqrt_post(
            body=body,
        )
        pprint(api_response)
    except openapi_client_py.ApiException as e:
        print("Exception when calling MysqrtApi->sqrt_post: %s\n" % e)
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
[**SqrtInput**](../../models/SqrtInput.md) |  | 


### Return Types, Responses

Code | Class | Description
------------- | ------------- | -------------
n/a | api_client.ApiResponseWithoutDeserialization | When skip_deserialization is True this response is returned
200 | [ApiResponseFor200](#sqrt_post.ApiResponseFor200) | Description of this response.

#### sqrt_post.ApiResponseFor200
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
response | urllib3.HTTPResponse | Raw response |
body | typing.Union[SchemaFor200ResponseBodyApplicationJson, ] |  |
headers | Unset | headers were not defined |

# SchemaFor200ResponseBodyApplicationJson
Type | Description  | Notes
------------- | ------------- | -------------
[**SqrtOutput**](../../models/SqrtOutput.md) |  | 


### Authorization

No authorization required

[[Back to top]](#__pageTop) [[Back to API list]](../../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../../README.md#documentation-for-models) [[Back to README]](../../../README.md)

