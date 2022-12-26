# coding: utf-8

"""
    rest-cpp-data-science

    data science REST API endpoints, parameters, and responses, including information about preprocessing data, training models, making predictions, and evaluating models.  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Generated by: https://openapi-generator.tech
"""

from datetime import date, datetime  # noqa: F401
import decimal  # noqa: F401
import functools  # noqa: F401
import io  # noqa: F401
import re  # noqa: F401
import typing  # noqa: F401
import typing_extensions  # noqa: F401
import uuid  # noqa: F401

import frozendict  # noqa: F401

from openapi_client_py import schemas  # noqa: F401


class MatrixAddInput(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        
        class properties:
            
            
            class mat1(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    
                    
                    class items(
                        schemas.ListSchema
                    ):
                    
                    
                        class MetaOapg:
                            items = schemas.NumberSchema
                    
                        def __new__(
                            cls,
                            _arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, decimal.Decimal, int, float, ]], typing.List[typing.Union[MetaOapg.items, decimal.Decimal, int, float, ]]],
                            _configuration: typing.Optional[schemas.Configuration] = None,
                        ) -> 'items':
                            return super().__new__(
                                cls,
                                _arg,
                                _configuration=_configuration,
                            )
                    
                        def __getitem__(self, i: int) -> MetaOapg.items:
                            return super().__getitem__(i)
            
                def __new__(
                    cls,
                    _arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, list, tuple, ]], typing.List[typing.Union[MetaOapg.items, list, tuple, ]]],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'mat1':
                    return super().__new__(
                        cls,
                        _arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> MetaOapg.items:
                    return super().__getitem__(i)
            
            
            class mat2(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    
                    
                    class items(
                        schemas.ListSchema
                    ):
                    
                    
                        class MetaOapg:
                            items = schemas.NumberSchema
                    
                        def __new__(
                            cls,
                            _arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, decimal.Decimal, int, float, ]], typing.List[typing.Union[MetaOapg.items, decimal.Decimal, int, float, ]]],
                            _configuration: typing.Optional[schemas.Configuration] = None,
                        ) -> 'items':
                            return super().__new__(
                                cls,
                                _arg,
                                _configuration=_configuration,
                            )
                    
                        def __getitem__(self, i: int) -> MetaOapg.items:
                            return super().__getitem__(i)
            
                def __new__(
                    cls,
                    _arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, list, tuple, ]], typing.List[typing.Union[MetaOapg.items, list, tuple, ]]],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'mat2':
                    return super().__new__(
                        cls,
                        _arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> MetaOapg.items:
                    return super().__getitem__(i)
            __annotations__ = {
                "mat1": mat1,
                "mat2": mat2,
            }
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["mat1"]) -> MetaOapg.properties.mat1: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["mat2"]) -> MetaOapg.properties.mat2: ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["mat1", "mat2", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["mat1"]) -> typing.Union[MetaOapg.properties.mat1, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["mat2"]) -> typing.Union[MetaOapg.properties.mat2, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["mat1", "mat2", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *_args: typing.Union[dict, frozendict.frozendict, ],
        mat1: typing.Union[MetaOapg.properties.mat1, list, tuple, schemas.Unset] = schemas.unset,
        mat2: typing.Union[MetaOapg.properties.mat2, list, tuple, schemas.Unset] = schemas.unset,
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'MatrixAddInput':
        return super().__new__(
            cls,
            *_args,
            mat1=mat1,
            mat2=mat2,
            _configuration=_configuration,
            **kwargs,
        )
