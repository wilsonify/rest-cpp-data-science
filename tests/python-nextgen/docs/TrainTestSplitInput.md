# TrainTestSplitInput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**x** | **List[List[float]]** |  | [optional] 
**y** | **List[List[float]]** |  | [optional] 
**p** | **float** |  | [optional] 

## Example

```python
from openapi_client_pyng.models.train_test_split_input import TrainTestSplitInput

# TODO update the JSON string below
json = "{}"
# create an instance of TrainTestSplitInput from a JSON string
train_test_split_input_instance = TrainTestSplitInput.from_json(json)
# print the JSON string representation of the object
print TrainTestSplitInput.to_json()

# convert the object into a dict
train_test_split_input_dict = train_test_split_input_instance.to_dict()
# create an instance of TrainTestSplitInput from a dict
train_test_split_input_form_dict = train_test_split_input.from_dict(train_test_split_input_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


