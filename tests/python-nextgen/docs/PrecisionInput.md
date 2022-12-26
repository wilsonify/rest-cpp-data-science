# PrecisionInput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**tp** | **float** | number of True Positives | [optional] 
**fp** | **float** | number of False Positives | [optional] 
**fn** | **float** | number of False Negatives | [optional] 
**tn** | **float** | number of True Negatives | [optional] 

## Example

```python
from openapi_client_pyng.models.precision_input import PrecisionInput

# TODO update the JSON string below
json = "{}"
# create an instance of PrecisionInput from a JSON string
precision_input_instance = PrecisionInput.from_json(json)
# print the JSON string representation of the object
print PrecisionInput.to_json()

# convert the object into a dict
precision_input_dict = precision_input_instance.to_dict()
# create an instance of PrecisionInput from a dict
precision_input_form_dict = precision_input.from_dict(precision_input_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


