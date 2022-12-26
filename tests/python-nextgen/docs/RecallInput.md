# RecallInput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**tp** | **float** | number of True Positives | [optional] 
**fp** | **float** | number of False Positives | [optional] 
**fn** | **float** | number of False Negatives | [optional] 
**tn** | **float** | number of True Negatives | [optional] 

## Example

```python
from openapi_client_pyng.models.recall_input import RecallInput

# TODO update the JSON string below
json = "{}"
# create an instance of RecallInput from a JSON string
recall_input_instance = RecallInput.from_json(json)
# print the JSON string representation of the object
print RecallInput.to_json()

# convert the object into a dict
recall_input_dict = recall_input_instance.to_dict()
# create an instance of RecallInput from a dict
recall_input_form_dict = recall_input.from_dict(recall_input_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


