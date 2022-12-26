# openapi_client_pyng.MachineLearningApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**accracy_post**](MachineLearningApi.md#accracy_post) | **POST** /acc&#x60;racy | 
[**f1_score_post**](MachineLearningApi.md#f1_score_post) | **POST** /f1_score | 
[**precision_post**](MachineLearningApi.md#precision_post) | **POST** /precision | 
[**split_data_post**](MachineLearningApi.md#split_data_post) | **POST** /split_data | 
[**train_test_split_post**](MachineLearningApi.md#train_test_split_post) | **POST** /train_test_split | 


# **accracy_post**
> float accracy_post(accuracy_input=accuracy_input)



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
    api_instance = openapi_client_pyng.MachineLearningApi(api_client)
    accuracy_input = openapi_client_pyng.AccuracyInput() # AccuracyInput |  (optional)

    try:
        api_response = api_instance.accracy_post(accuracy_input=accuracy_input)
        print("The response of MachineLearningApi->accracy_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MachineLearningApi->accracy_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accuracy_input** | [**AccuracyInput**](AccuracyInput.md)|  | [optional] 

### Return type

**float**

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

# **f1_score_post**
> float f1_score_post(f1_score_input=f1_score_input)



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
    api_instance = openapi_client_pyng.MachineLearningApi(api_client)
    f1_score_input = openapi_client_pyng.F1ScoreInput() # F1ScoreInput |  (optional)

    try:
        api_response = api_instance.f1_score_post(f1_score_input=f1_score_input)
        print("The response of MachineLearningApi->f1_score_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MachineLearningApi->f1_score_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **f1_score_input** | [**F1ScoreInput**](F1ScoreInput.md)|  | [optional] 

### Return type

**float**

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

# **precision_post**
> float precision_post(precision_input=precision_input)



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
    api_instance = openapi_client_pyng.MachineLearningApi(api_client)
    precision_input = openapi_client_pyng.PrecisionInput() # PrecisionInput |  (optional)

    try:
        api_response = api_instance.precision_post(precision_input=precision_input)
        print("The response of MachineLearningApi->precision_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MachineLearningApi->precision_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **precision_input** | [**PrecisionInput**](PrecisionInput.md)|  | [optional] 

### Return type

**float**

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

# **split_data_post**
> SplitDataOutput split_data_post(split_data_input=split_data_input)



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
    api_instance = openapi_client_pyng.MachineLearningApi(api_client)
    split_data_input = openapi_client_pyng.SplitDataInput() # SplitDataInput |  (optional)

    try:
        api_response = api_instance.split_data_post(split_data_input=split_data_input)
        print("The response of MachineLearningApi->split_data_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MachineLearningApi->split_data_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **split_data_input** | [**SplitDataInput**](SplitDataInput.md)|  | [optional] 

### Return type

[**SplitDataOutput**](SplitDataOutput.md)

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

# **train_test_split_post**
> TrainTestSplitOutput train_test_split_post(train_test_split_input=train_test_split_input)



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
    api_instance = openapi_client_pyng.MachineLearningApi(api_client)
    train_test_split_input = openapi_client_pyng.TrainTestSplitInput() # TrainTestSplitInput |  (optional)

    try:
        api_response = api_instance.train_test_split_post(train_test_split_input=train_test_split_input)
        print("The response of MachineLearningApi->train_test_split_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MachineLearningApi->train_test_split_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **train_test_split_input** | [**TrainTestSplitInput**](TrainTestSplitInput.md)|  | [optional] 

### Return type

[**TrainTestSplitOutput**](TrainTestSplitOutput.md)

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

