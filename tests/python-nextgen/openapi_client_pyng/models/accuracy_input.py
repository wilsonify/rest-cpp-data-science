# coding: utf-8

"""
    rest-cpp-data-science

    data science REST API endpoints, parameters, and responses, including information about preprocessing data, training models, making predictions, and evaluating models.  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Generated by: https://openapi-generator.tech
"""


from __future__ import annotations
from inspect import getfullargspec
import pprint
import re  # noqa: F401
import json


from typing import Optional
from pydantic import BaseModel, Field, StrictFloat

class AccuracyInput(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    tp: Optional[StrictFloat] = Field(None, description="number of True Positives")
    fp: Optional[StrictFloat] = Field(None, description="number of False Positives")
    fn: Optional[StrictFloat] = Field(None, description="number of False Negatives")
    tn: Optional[StrictFloat] = Field(None, description="number of True Negatives")
    __properties = ["tp", "fp", "fn", "tn"]

    class Config:
        allow_population_by_field_name = True
        validate_assignment = True

    def to_str(self) -> str:
        """Returns the string representation of the model using alias"""
        return pprint.pformat(self.dict(by_alias=True))

    def to_json(self) -> str:
        """Returns the JSON representation of the model using alias"""
        return json.dumps(self.to_dict())

    @classmethod
    def from_json(cls, json_str: str) -> AccuracyInput:
        """Create an instance of AccuracyInput from a JSON string"""
        return cls.from_dict(json.loads(json_str))

    def to_dict(self):
        """Returns the dictionary representation of the model using alias"""
        _dict = self.dict(by_alias=True,
                          exclude={
                          },
                          exclude_none=True)
        return _dict

    @classmethod
    def from_dict(cls, obj: dict) -> AccuracyInput:
        """Create an instance of AccuracyInput from a dict"""
        if obj is None:
            return None

        if type(obj) is not dict:
            return AccuracyInput.parse_obj(obj)

        _obj = AccuracyInput.parse_obj({
            "tp": obj.get("tp"),
            "fp": obj.get("fp"),
            "fn": obj.get("fn"),
            "tn": obj.get("tn")
        })
        return _obj

