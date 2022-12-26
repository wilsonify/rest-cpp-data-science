# F1ScoreInput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**tp** | **float** | number of True Positives | [optional] 
**fp** | **float** | number of False Positives | [optional] 
**fn** | **float** | number of False Negatives | [optional] 
**tn** | **float** | number of True Negatives | [optional] 

## Example

```python
from openapi_client_pyng.models.f1_score_input import F1ScoreInput

# TODO update the JSON string below
json = "{}"
# create an instance of F1ScoreInput from a JSON string
f1_score_input_instance = F1ScoreInput.from_json(json)
# print the JSON string representation of the object
print F1ScoreInput.to_json()

# convert the object into a dict
f1_score_input_dict = f1_score_input_instance.to_dict()
# create an instance of F1ScoreInput from a dict
f1_score_input_form_dict = f1_score_input.from_dict(f1_score_input_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


