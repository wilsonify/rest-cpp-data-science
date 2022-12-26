# openapi_client_pyng.EchoApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**echo_post**](EchoApi.md#echo_post) | **POST** /echo | 


# **echo_post**
> str echo_post(body=body)



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
    api_instance = openapi_client_pyng.EchoApi(api_client)
    body = 'body_example' # str |  (optional)

    try:
        api_response = api_instance.echo_post(body=body)
        print("The response of EchoApi->echo_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling EchoApi->echo_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **str**|  | [optional] 

### Return type

**str**

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

