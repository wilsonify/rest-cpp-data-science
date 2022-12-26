# BucketizeInput


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**point** | **float** |  | [optional] 
**bucket_size** | **float** |  | [optional] 

## Example

```python
from openapi_client_pyng.models.bucketize_input import BucketizeInput

# TODO update the JSON string below
json = "{}"
# create an instance of BucketizeInput from a JSON string
bucketize_input_instance = BucketizeInput.from_json(json)
# print the JSON string representation of the object
print BucketizeInput.to_json()

# convert the object into a dict
bucketize_input_dict = bucketize_input_instance.to_dict()
# create an instance of BucketizeInput from a dict
bucketize_input_form_dict = bucketize_input.from_dict(bucketize_input_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


