# openapi_client_pyng.StatsApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**bucketize_post**](StatsApi.md#bucketize_post) | **POST** /bucketize | 
[**correlation_matrix_post**](StatsApi.md#correlation_matrix_post) | **POST** /correlation_matrix | 
[**correlation_post**](StatsApi.md#correlation_post) | **POST** /correlation | 
[**covariance_post**](StatsApi.md#covariance_post) | **POST** /covariance | 
[**data_range_post**](StatsApi.md#data_range_post) | **POST** /data_range | 
[**de_mean_post**](StatsApi.md#de_mean_post) | **POST** /de_mean | 
[**interquartile_range_post**](StatsApi.md#interquartile_range_post) | **POST** /interquartile_range | 
[**mean_post**](StatsApi.md#mean_post) | **POST** /mean | 
[**median_post**](StatsApi.md#median_post) | **POST** /median | 
[**mode_post**](StatsApi.md#mode_post) | **POST** /mode | 
[**quantile_post**](StatsApi.md#quantile_post) | **POST** /quantile | 
[**recall_post**](StatsApi.md#recall_post) | **POST** /recall | 
[**standard_deviation_post**](StatsApi.md#standard_deviation_post) | **POST** /standard_deviation | 
[**variance_post**](StatsApi.md#variance_post) | **POST** /variance | 


# **bucketize_post**
> BucketizeOutput bucketize_post(bucketize_input=bucketize_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    bucketize_input = openapi_client_pyng.BucketizeInput() # BucketizeInput |  (optional)

    try:
        api_response = api_instance.bucketize_post(bucketize_input=bucketize_input)
        print("The response of StatsApi->bucketize_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->bucketize_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bucketize_input** | [**BucketizeInput**](BucketizeInput.md)|  | [optional] 

### Return type

[**BucketizeOutput**](BucketizeOutput.md)

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

# **correlation_matrix_post**
> CorrelationMatrixOutput correlation_matrix_post(correlation_matrix_input=correlation_matrix_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    correlation_matrix_input = openapi_client_pyng.CorrelationMatrixInput() # CorrelationMatrixInput |  (optional)

    try:
        api_response = api_instance.correlation_matrix_post(correlation_matrix_input=correlation_matrix_input)
        print("The response of StatsApi->correlation_matrix_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->correlation_matrix_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **correlation_matrix_input** | [**CorrelationMatrixInput**](CorrelationMatrixInput.md)|  | [optional] 

### Return type

[**CorrelationMatrixOutput**](CorrelationMatrixOutput.md)

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

# **correlation_post**
> CorrelationOutput correlation_post(correlation_input=correlation_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    correlation_input = openapi_client_pyng.CorrelationInput() # CorrelationInput |  (optional)

    try:
        api_response = api_instance.correlation_post(correlation_input=correlation_input)
        print("The response of StatsApi->correlation_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->correlation_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **correlation_input** | [**CorrelationInput**](CorrelationInput.md)|  | [optional] 

### Return type

[**CorrelationOutput**](CorrelationOutput.md)

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

# **covariance_post**
> CovarianceOutput covariance_post(covariance_input=covariance_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    covariance_input = openapi_client_pyng.CovarianceInput() # CovarianceInput |  (optional)

    try:
        api_response = api_instance.covariance_post(covariance_input=covariance_input)
        print("The response of StatsApi->covariance_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->covariance_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **covariance_input** | [**CovarianceInput**](CovarianceInput.md)|  | [optional] 

### Return type

[**CovarianceOutput**](CovarianceOutput.md)

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

# **data_range_post**
> DataRangeOutput data_range_post(data_range_input=data_range_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    data_range_input = openapi_client_pyng.DataRangeInput() # DataRangeInput |  (optional)

    try:
        api_response = api_instance.data_range_post(data_range_input=data_range_input)
        print("The response of StatsApi->data_range_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->data_range_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **data_range_input** | [**DataRangeInput**](DataRangeInput.md)|  | [optional] 

### Return type

[**DataRangeOutput**](DataRangeOutput.md)

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

# **de_mean_post**
> DeMeanOutput de_mean_post(de_mean_input=de_mean_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    de_mean_input = openapi_client_pyng.DeMeanInput() # DeMeanInput |  (optional)

    try:
        api_response = api_instance.de_mean_post(de_mean_input=de_mean_input)
        print("The response of StatsApi->de_mean_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->de_mean_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **de_mean_input** | [**DeMeanInput**](DeMeanInput.md)|  | [optional] 

### Return type

[**DeMeanOutput**](DeMeanOutput.md)

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

# **interquartile_range_post**
> float interquartile_range_post(interquartile_range_input=interquartile_range_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    interquartile_range_input = openapi_client_pyng.InterquartileRangeInput() # InterquartileRangeInput |  (optional)

    try:
        api_response = api_instance.interquartile_range_post(interquartile_range_input=interquartile_range_input)
        print("The response of StatsApi->interquartile_range_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->interquartile_range_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **interquartile_range_input** | [**InterquartileRangeInput**](InterquartileRangeInput.md)|  | [optional] 

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

# **mean_post**
> float mean_post(mean_input=mean_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    mean_input = openapi_client_pyng.MeanInput() # MeanInput |  (optional)

    try:
        api_response = api_instance.mean_post(mean_input=mean_input)
        print("The response of StatsApi->mean_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->mean_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mean_input** | [**MeanInput**](MeanInput.md)|  | [optional] 

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

# **median_post**
> float median_post(median_input=median_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    median_input = openapi_client_pyng.MedianInput() # MedianInput |  (optional)

    try:
        api_response = api_instance.median_post(median_input=median_input)
        print("The response of StatsApi->median_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->median_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **median_input** | [**MedianInput**](MedianInput.md)|  | [optional] 

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

# **mode_post**
> List[float] mode_post(mode_input=mode_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    mode_input = openapi_client_pyng.ModeInput() # ModeInput |  (optional)

    try:
        api_response = api_instance.mode_post(mode_input=mode_input)
        print("The response of StatsApi->mode_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->mode_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mode_input** | [**ModeInput**](ModeInput.md)|  | [optional] 

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

# **quantile_post**
> float quantile_post(quantile_input=quantile_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    quantile_input = openapi_client_pyng.QuantileInput() # QuantileInput |  (optional)

    try:
        api_response = api_instance.quantile_post(quantile_input=quantile_input)
        print("The response of StatsApi->quantile_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->quantile_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **quantile_input** | [**QuantileInput**](QuantileInput.md)|  | [optional] 

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

# **recall_post**
> float recall_post(recall_input=recall_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    recall_input = openapi_client_pyng.RecallInput() # RecallInput |  (optional)

    try:
        api_response = api_instance.recall_post(recall_input=recall_input)
        print("The response of StatsApi->recall_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->recall_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **recall_input** | [**RecallInput**](RecallInput.md)|  | [optional] 

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

# **standard_deviation_post**
> float standard_deviation_post(standard_deviation_input=standard_deviation_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    standard_deviation_input = openapi_client_pyng.StandardDeviationInput() # StandardDeviationInput |  (optional)

    try:
        api_response = api_instance.standard_deviation_post(standard_deviation_input=standard_deviation_input)
        print("The response of StatsApi->standard_deviation_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->standard_deviation_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **standard_deviation_input** | [**StandardDeviationInput**](StandardDeviationInput.md)|  | [optional] 

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

# **variance_post**
> float variance_post(variance_input=variance_input)



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
    api_instance = openapi_client_pyng.StatsApi(api_client)
    variance_input = openapi_client_pyng.VarianceInput() # VarianceInput |  (optional)

    try:
        api_response = api_instance.variance_post(variance_input=variance_input)
        print("The response of StatsApi->variance_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling StatsApi->variance_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **variance_input** | [**VarianceInput**](VarianceInput.md)|  | [optional] 

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

