# AccuracyInput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**tp** | **float** | number of True Positives | [optional] 
**fp** | **float** | number of False Positives | [optional] 
**fn** | **float** | number of False Negatives | [optional] 
**tn** | **float** | number of True Negatives | [optional] 

## Example

```python
from openapi_client_pyng.models.accuracy_input import AccuracyInput

# TODO update the JSON string below
json = "{}"
# create an instance of AccuracyInput from a JSON string
accuracy_input_instance = AccuracyInput.from_json(json)
# print the JSON string representation of the object
print AccuracyInput.to_json()

# convert the object into a dict
accuracy_input_dict = accuracy_input_instance.to_dict()
# create an instance of AccuracyInput from a dict
accuracy_input_form_dict = accuracy_input.from_dict(accuracy_input_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


