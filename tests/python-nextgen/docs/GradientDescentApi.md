# openapi_client_pyng.GradientDescentApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**difference_quotient_post**](GradientDescentApi.md#difference_quotient_post) | **POST** /difference_quotient | 
[**estimate_gradient_post**](GradientDescentApi.md#estimate_gradient_post) | **POST** /estimate_gradient | 
[**in_random_order_post**](GradientDescentApi.md#in_random_order_post) | **POST** /in_random_order | 
[**maximize_batch_post**](GradientDescentApi.md#maximize_batch_post) | **POST** /maximize_batch | 
[**maximize_stochastic_post**](GradientDescentApi.md#maximize_stochastic_post) | **POST** /maximize_stochastic | 
[**minimize_batch_post**](GradientDescentApi.md#minimize_batch_post) | **POST** /minimize_batch | 
[**minimize_stochastic_post**](GradientDescentApi.md#minimize_stochastic_post) | **POST** /minimize_stochastic | 
[**partial_difference_quotient_post**](GradientDescentApi.md#partial_difference_quotient_post) | **POST** /partial_difference_quotient | 


# **difference_quotient_post**
> DifferenceQuotientOutput difference_quotient_post(difference_quotient_input=difference_quotient_input)



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
    api_instance = openapi_client_pyng.GradientDescentApi(api_client)
    difference_quotient_input = openapi_client_pyng.DifferenceQuotientInput() # DifferenceQuotientInput |  (optional)

    try:
        api_response = api_instance.difference_quotient_post(difference_quotient_input=difference_quotient_input)
        print("The response of GradientDescentApi->difference_quotient_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling GradientDescentApi->difference_quotient_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **difference_quotient_input** | [**DifferenceQuotientInput**](DifferenceQuotientInput.md)|  | [optional] 

### Return type

[**DifferenceQuotientOutput**](DifferenceQuotientOutput.md)

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

# **estimate_gradient_post**
> EstimateGradientOutput estimate_gradient_post(estimate_gradient_input=estimate_gradient_input)



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
    api_instance = openapi_client_pyng.GradientDescentApi(api_client)
    estimate_gradient_input = openapi_client_pyng.EstimateGradientInput() # EstimateGradientInput |  (optional)

    try:
        api_response = api_instance.estimate_gradient_post(estimate_gradient_input=estimate_gradient_input)
        print("The response of GradientDescentApi->estimate_gradient_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling GradientDescentApi->estimate_gradient_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **estimate_gradient_input** | [**EstimateGradientInput**](EstimateGradientInput.md)|  | [optional] 

### Return type

[**EstimateGradientOutput**](EstimateGradientOutput.md)

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

# **in_random_order_post**
> List[float] in_random_order_post(in_random_order_input=in_random_order_input)



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
    api_instance = openapi_client_pyng.GradientDescentApi(api_client)
    in_random_order_input = openapi_client_pyng.InRandomOrderInput() # InRandomOrderInput |  (optional)

    try:
        api_response = api_instance.in_random_order_post(in_random_order_input=in_random_order_input)
        print("The response of GradientDescentApi->in_random_order_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling GradientDescentApi->in_random_order_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **in_random_order_input** | [**InRandomOrderInput**](InRandomOrderInput.md)|  | [optional] 

### Return type

**List[float]**

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

# **maximize_batch_post**
> MaximizeBatchOutput maximize_batch_post(maximize_batch_input=maximize_batch_input)



use gradient descent to find theta that minimizes target function

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
    api_instance = openapi_client_pyng.GradientDescentApi(api_client)
    maximize_batch_input = openapi_client_pyng.MaximizeBatchInput() # MaximizeBatchInput |  (optional)

    try:
        api_response = api_instance.maximize_batch_post(maximize_batch_input=maximize_batch_input)
        print("The response of GradientDescentApi->maximize_batch_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling GradientDescentApi->maximize_batch_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **maximize_batch_input** | [**MaximizeBatchInput**](MaximizeBatchInput.md)|  | [optional] 

### Return type

[**MaximizeBatchOutput**](MaximizeBatchOutput.md)

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

# **maximize_stochastic_post**
> MaximizeStochasticOutput maximize_stochastic_post(maximize_stochastic_input=maximize_stochastic_input)



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
    api_instance = openapi_client_pyng.GradientDescentApi(api_client)
    maximize_stochastic_input = openapi_client_pyng.MaximizeStochasticInput() # MaximizeStochasticInput |  (optional)

    try:
        api_response = api_instance.maximize_stochastic_post(maximize_stochastic_input=maximize_stochastic_input)
        print("The response of GradientDescentApi->maximize_stochastic_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling GradientDescentApi->maximize_stochastic_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **maximize_stochastic_input** | [**MaximizeStochasticInput**](MaximizeStochasticInput.md)|  | [optional] 

### Return type

[**MaximizeStochasticOutput**](MaximizeStochasticOutput.md)

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

# **minimize_batch_post**
> MinimizeBatchOutput minimize_batch_post(minimize_batch_input=minimize_batch_input)



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
    api_instance = openapi_client_pyng.GradientDescentApi(api_client)
    minimize_batch_input = openapi_client_pyng.MinimizeBatchInput() # MinimizeBatchInput |  (optional)

    try:
        api_response = api_instance.minimize_batch_post(minimize_batch_input=minimize_batch_input)
        print("The response of GradientDescentApi->minimize_batch_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling GradientDescentApi->minimize_batch_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **minimize_batch_input** | [**MinimizeBatchInput**](MinimizeBatchInput.md)|  | [optional] 

### Return type

[**MinimizeBatchOutput**](MinimizeBatchOutput.md)

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

# **minimize_stochastic_post**
> MinimizeStochasticOutput minimize_stochastic_post(minimize_stochastic_input=minimize_stochastic_input)



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
    api_instance = openapi_client_pyng.GradientDescentApi(api_client)
    minimize_stochastic_input = openapi_client_pyng.MinimizeStochasticInput() # MinimizeStochasticInput |  (optional)

    try:
        api_response = api_instance.minimize_stochastic_post(minimize_stochastic_input=minimize_stochastic_input)
        print("The response of GradientDescentApi->minimize_stochastic_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling GradientDescentApi->minimize_stochastic_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **minimize_stochastic_input** | [**MinimizeStochasticInput**](MinimizeStochasticInput.md)|  | [optional] 

### Return type

[**MinimizeStochasticOutput**](MinimizeStochasticOutput.md)

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

# **partial_difference_quotient_post**
> PartialDifferenceQuotientOutput partial_difference_quotient_post(partial_difference_quotient_input=partial_difference_quotient_input)



add h to just the i-th element of v

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
    api_instance = openapi_client_pyng.GradientDescentApi(api_client)
    partial_difference_quotient_input = openapi_client_pyng.PartialDifferenceQuotientInput() # PartialDifferenceQuotientInput |  (optional)

    try:
        api_response = api_instance.partial_difference_quotient_post(partial_difference_quotient_input=partial_difference_quotient_input)
        print("The response of GradientDescentApi->partial_difference_quotient_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling GradientDescentApi->partial_difference_quotient_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **partial_difference_quotient_input** | [**PartialDifferenceQuotientInput**](PartialDifferenceQuotientInput.md)|  | [optional] 

### Return type

[**PartialDifferenceQuotientOutput**](PartialDifferenceQuotientOutput.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | v with h added to just the i-th element |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

