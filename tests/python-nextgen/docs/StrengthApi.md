# openapi_client_pyng.StrengthApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**strength_post**](StrengthApi.md#strength_post) | **POST** /strength | 


# **strength_post**
> StrengthOutput strength_post(strength_input=strength_input)



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
    api_instance = openapi_client_pyng.StrengthApi(api_client)
    strength_input = openapi_client_pyng.StrengthInput() # StrengthInput |  (optional)

    try:
        api_response = api_instance.strength_post(strength_input=strength_input)
        print("The response of StrengthApi->strength_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StrengthApi->strength_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **strength_input** | [**StrengthInput**](StrengthInput.md)|  | [optional] 

### Return type

[**StrengthOutput**](StrengthOutput.md)

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

