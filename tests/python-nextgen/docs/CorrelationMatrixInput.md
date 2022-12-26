# CorrelationMatrixInput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**x** | **List[float]** |  | [optional] 
**y** | **List[float]** |  | [optional] 

## Example

```python
from openapi_client_pyng.models.correlation_matrix_input import CorrelationMatrixInput

# TODO update the JSON string below
json = "{}"
# create an instance of CorrelationMatrixInput from a JSON string
correlation_matrix_input_instance = CorrelationMatrixInput.from_json(json)
# print the JSON string representation of the object
print CorrelationMatrixInput.to_json()

# convert the object into a dict
correlation_matrix_input_dict = correlation_matrix_input_instance.to_dict()
# create an instance of CorrelationMatrixInput from a dict
correlation_matrix_input_form_dict = correlation_matrix_input.from_dict(correlation_matrix_input_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


