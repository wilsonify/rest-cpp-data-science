# ScalarMultiplyInput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**c** | **float** |  | [optional] 
**mat** | **List[List[float]]** |  | [optional] 

## Example

```python
from openapi_client_pyng.models.scalar_multiply_input import ScalarMultiplyInput

# TODO update the JSON string below
json = "{}"
# create an instance of ScalarMultiplyInput from a JSON string
scalar_multiply_input_instance = ScalarMultiplyInput.from_json(json)
# print the JSON string representation of the object
print ScalarMultiplyInput.to_json()

# convert the object into a dict
scalar_multiply_input_dict = scalar_multiply_input_instance.to_dict()
# create an instance of ScalarMultiplyInput from a dict
scalar_multiply_input_form_dict = scalar_multiply_input.from_dict(scalar_multiply_input_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


