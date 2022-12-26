# TrainTestSplitOutput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**x_train** | **List[List[float]]** |  | [optional] 
**x_test** | **List[List[float]]** |  | [optional] 
**y_train** | **List[float]** |  | [optional] 
**y_test** | **List[float]** |  | [optional] 

## Example

```python
from openapi_client_pyng.models.train_test_split_output import TrainTestSplitOutput

# TODO update the JSON string below
json = "{}"
# create an instance of TrainTestSplitOutput from a JSON string
train_test_split_output_instance = TrainTestSplitOutput.from_json(json)
# print the JSON string representation of the object
print TrainTestSplitOutput.to_json()

# convert the object into a dict
train_test_split_output_dict = train_test_split_output_instance.to_dict()
# create an instance of TrainTestSplitOutput from a dict
train_test_split_output_form_dict = train_test_split_output.from_dict(train_test_split_output_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


