# openapi_client_pyng.LinearAlgebraApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**distance_post**](LinearAlgebraApi.md#distance_post) | **POST** /distance | 
[**dot_post**](LinearAlgebraApi.md#dot_post) | **POST** /dot | 
[**get_column_post**](LinearAlgebraApi.md#get_column_post) | **POST** /get_column | 
[**get_row_post**](LinearAlgebraApi.md#get_row_post) | **POST** /get_row | 
[**magnitude_post**](LinearAlgebraApi.md#magnitude_post) | **POST** /magnitude | 
[**matrix_add_post**](LinearAlgebraApi.md#matrix_add_post) | **POST** /matrix_add | 
[**scalar_multiply_post**](LinearAlgebraApi.md#scalar_multiply_post) | **POST** /scalar_multiply | 
[**shape_post**](LinearAlgebraApi.md#shape_post) | **POST** /shape | 
[**squared_distance_post**](LinearAlgebraApi.md#squared_distance_post) | **POST** /squared_distance | 
[**sum_of_squares_post**](LinearAlgebraApi.md#sum_of_squares_post) | **POST** /sum_of_squares | 
[**vector_add_post**](LinearAlgebraApi.md#vector_add_post) | **POST** /vector_add | 
[**vector_mean_post**](LinearAlgebraApi.md#vector_mean_post) | **POST** /vector_mean | 
[**vector_subtract_post**](LinearAlgebraApi.md#vector_subtract_post) | **POST** /vector_subtract | 
[**vector_sum_post**](LinearAlgebraApi.md#vector_sum_post) | **POST** /vector_sum | 


# **distance_post**
> DistanceOutput distance_post(distance_input=distance_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    distance_input = openapi_client_pyng.DistanceInput() # DistanceInput |  (optional)

    try:
        api_response = api_instance.distance_post(distance_input=distance_input)
        print("The response of LinearAlgebraApi->distance_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->distance_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **distance_input** | [**DistanceInput**](DistanceInput.md)|  | [optional] 

### Return type

[**DistanceOutput**](DistanceOutput.md)

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

# **dot_post**
> DotOutput dot_post(dot_input=dot_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    dot_input = openapi_client_pyng.DotInput() # DotInput |  (optional)

    try:
        api_response = api_instance.dot_post(dot_input=dot_input)
        print("The response of LinearAlgebraApi->dot_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->dot_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **dot_input** | [**DotInput**](DotInput.md)|  | [optional] 

### Return type

[**DotOutput**](DotOutput.md)

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

# **get_column_post**
> GetColumnOutput get_column_post(get_column_input=get_column_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    get_column_input = openapi_client_pyng.GetColumnInput() # GetColumnInput |  (optional)

    try:
        api_response = api_instance.get_column_post(get_column_input=get_column_input)
        print("The response of LinearAlgebraApi->get_column_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->get_column_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **get_column_input** | [**GetColumnInput**](GetColumnInput.md)|  | [optional] 

### Return type

[**GetColumnOutput**](GetColumnOutput.md)

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

# **get_row_post**
> GetRowOutput get_row_post(get_row_input=get_row_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    get_row_input = openapi_client_pyng.GetRowInput() # GetRowInput |  (optional)

    try:
        api_response = api_instance.get_row_post(get_row_input=get_row_input)
        print("The response of LinearAlgebraApi->get_row_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->get_row_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **get_row_input** | [**GetRowInput**](GetRowInput.md)|  | [optional] 

### Return type

[**GetRowOutput**](GetRowOutput.md)

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

# **magnitude_post**
> float magnitude_post(magnitude_input=magnitude_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    magnitude_input = openapi_client_pyng.MagnitudeInput() # MagnitudeInput |  (optional)

    try:
        api_response = api_instance.magnitude_post(magnitude_input=magnitude_input)
        print("The response of LinearAlgebraApi->magnitude_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->magnitude_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **magnitude_input** | [**MagnitudeInput**](MagnitudeInput.md)|  | [optional] 

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

# **matrix_add_post**
> List[List[float]] matrix_add_post(matrix_add_input=matrix_add_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    matrix_add_input = openapi_client_pyng.MatrixAddInput() # MatrixAddInput |  (optional)

    try:
        api_response = api_instance.matrix_add_post(matrix_add_input=matrix_add_input)
        print("The response of LinearAlgebraApi->matrix_add_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->matrix_add_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **matrix_add_input** | [**MatrixAddInput**](MatrixAddInput.md)|  | [optional] 

### Return type

**List[List[float]]**

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

# **scalar_multiply_post**
> List[List[float]] scalar_multiply_post(scalar_multiply_input=scalar_multiply_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    scalar_multiply_input = openapi_client_pyng.ScalarMultiplyInput() # ScalarMultiplyInput |  (optional)

    try:
        api_response = api_instance.scalar_multiply_post(scalar_multiply_input=scalar_multiply_input)
        print("The response of LinearAlgebraApi->scalar_multiply_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->scalar_multiply_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **scalar_multiply_input** | [**ScalarMultiplyInput**](ScalarMultiplyInput.md)|  | [optional] 

### Return type

**List[List[float]]**

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

# **shape_post**
> ShapeOutput shape_post(shape_input=shape_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    shape_input = openapi_client_pyng.ShapeInput() # ShapeInput |  (optional)

    try:
        api_response = api_instance.shape_post(shape_input=shape_input)
        print("The response of LinearAlgebraApi->shape_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->shape_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **shape_input** | [**ShapeInput**](ShapeInput.md)|  | [optional] 

### Return type

[**ShapeOutput**](ShapeOutput.md)

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

# **squared_distance_post**
> List[float] squared_distance_post(squared_distance_input=squared_distance_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    squared_distance_input = openapi_client_pyng.SquaredDistanceInput() # SquaredDistanceInput |  (optional)

    try:
        api_response = api_instance.squared_distance_post(squared_distance_input=squared_distance_input)
        print("The response of LinearAlgebraApi->squared_distance_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->squared_distance_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **squared_distance_input** | [**SquaredDistanceInput**](SquaredDistanceInput.md)|  | [optional] 

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

# **sum_of_squares_post**
> float sum_of_squares_post(sum_of_squares_input=sum_of_squares_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    sum_of_squares_input = openapi_client_pyng.SumOfSquaresInput() # SumOfSquaresInput |  (optional)

    try:
        api_response = api_instance.sum_of_squares_post(sum_of_squares_input=sum_of_squares_input)
        print("The response of LinearAlgebraApi->sum_of_squares_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->sum_of_squares_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sum_of_squares_input** | [**SumOfSquaresInput**](SumOfSquaresInput.md)|  | [optional] 

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

# **vector_add_post**
> List[float] vector_add_post(vector_add_input=vector_add_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    vector_add_input = openapi_client_pyng.VectorAddInput() # VectorAddInput |  (optional)

    try:
        api_response = api_instance.vector_add_post(vector_add_input=vector_add_input)
        print("The response of LinearAlgebraApi->vector_add_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->vector_add_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vector_add_input** | [**VectorAddInput**](VectorAddInput.md)|  | [optional] 

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

# **vector_mean_post**
> List[float] vector_mean_post(vector_mean_input=vector_mean_input)



compute the vector whose i-th element is the mean of the i-th elements of the input vectors

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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    vector_mean_input = openapi_client_pyng.VectorMeanInput() # VectorMeanInput |  (optional)

    try:
        api_response = api_instance.vector_mean_post(vector_mean_input=vector_mean_input)
        print("The response of LinearAlgebraApi->vector_mean_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->vector_mean_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vector_mean_input** | [**VectorMeanInput**](VectorMeanInput.md)|  | [optional] 

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
**200** | success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **vector_subtract_post**
> List[float] vector_subtract_post(vector_subtract_input=vector_subtract_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    vector_subtract_input = openapi_client_pyng.VectorSubtractInput() # VectorSubtractInput |  (optional)

    try:
        api_response = api_instance.vector_subtract_post(vector_subtract_input=vector_subtract_input)
        print("The response of LinearAlgebraApi->vector_subtract_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->vector_subtract_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vector_subtract_input** | [**VectorSubtractInput**](VectorSubtractInput.md)|  | [optional] 

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

# **vector_sum_post**
> List[float] vector_sum_post(vector_sum_input=vector_sum_input)



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
    api_instance = openapi_client_pyng.LinearAlgebraApi(api_client)
    vector_sum_input = openapi_client_pyng.VectorSumInput() # VectorSumInput |  (optional)

    try:
        api_response = api_instance.vector_sum_post(vector_sum_input=vector_sum_input)
        print("The response of LinearAlgebraApi->vector_sum_post:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling LinearAlgebraApi->vector_sum_post: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vector_sum_input** | [**VectorSumInput**](VectorSumInput.md)|  | [optional] 

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

