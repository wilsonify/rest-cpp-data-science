# openapi_client_pyng.MysqrtApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sqrt_post**](MysqrtApi.md#sqrt_post) | **POST** /sqrt | 


# **sqrt_post**
> SqrtOutput sqrt_post(sqrt_input=sqrt_input)



Description of the endpoint

### Example

```python
from __future__ import print_function
import time
import os
import openapi_client_pyng
from openapi_client_pyng.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client_pyng.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client_pyng.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = openapi_client_pyng.MysqrtApi(api_client)
    sqrt_input = openapi_client_pyng.SqrtInput() # SqrtInput |  (optional)

    try:
        api_response = api_instance.sqrt_post(sqrt_input=sqrt_input)
        print("The response of MysqrtApi->sqrt_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MysqrtApi->sqrt_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sqrt_input** | [**SqrtInput**](SqrtInput.md)|  | [optional] 

### Return type

[**SqrtOutput**](SqrtOutput.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Description of this response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

