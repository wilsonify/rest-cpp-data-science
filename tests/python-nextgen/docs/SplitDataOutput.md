# SplitDataOutput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**train** | **List[List[float]]** |  | [optional] 
**test** | **List[List[float]]** |  | [optional] 

## Example

```python
from openapi_client_pyng.models.split_data_output import SplitDataOutput

# TODO update the JSON string below
json = "{}"
# create an instance of SplitDataOutput from a JSON string
split_data_output_instance = SplitDataOutput.from_json(json)
# print the JSON string representation of the object
print SplitDataOutput.to_json()

# convert the object into a dict
split_data_output_dict = split_data_output_instance.to_dict()
# create an instance of SplitDataOutput from a dict
split_data_output_form_dict = split_data_output.from_dict(split_data_output_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


