# StrengthOutput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**actual** | **int** |  | [optional] 
**expected** | **int** |  | [optional] 
**strength** | **float** |  | [optional] 

## Example

```python
from openapi_client_pyng.models.strength_output import StrengthOutput

# TODO update the JSON string below
json = "{}"
# create an instance of StrengthOutput from a JSON string
strength_output_instance = StrengthOutput.from_json(json)
# print the JSON string representation of the object
print StrengthOutput.to_json()

# convert the object into a dict
strength_output_dict = strength_output_instance.to_dict()
# create an instance of StrengthOutput from a dict
strength_output_form_dict = strength_output.from_dict(strength_output_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


