import typing_extensions

from openapi_client_py.apis.tags import TagValues
from openapi_client_py.apis.tags.math_api import MathApi
from openapi_client_py.apis.tags.echo_api import EchoApi
from openapi_client_py.apis.tags.linear_algebra_api import LinearAlgebraApi
from openapi_client_py.apis.tags.machine_learning_api import MachineLearningApi
from openapi_client_py.apis.tags.stats_api import StatsApi
from openapi_client_py.apis.tags.gradient_descent_api import GradientDescentApi
from openapi_client_py.apis.tags.mysqrt_api import MysqrtApi
from openapi_client_py.apis.tags.strength_api import StrengthApi

TagToApi = typing_extensions.TypedDict(
    'TagToApi',
    {
        TagValues.MATH: MathApi,
        TagValues.ECHO: EchoApi,
        TagValues.LINEAR_ALGEBRA: LinearAlgebraApi,
        TagValues.MACHINE_LEARNING: MachineLearningApi,
        TagValues.STATS: StatsApi,
        TagValues.GRADIENT_DESCENT: GradientDescentApi,
        TagValues.MYSQRT: MysqrtApi,
        TagValues.STRENGTH: StrengthApi,
    }
)

tag_to_api = TagToApi(
    {
        TagValues.MATH: MathApi,
        TagValues.ECHO: EchoApi,
        TagValues.LINEAR_ALGEBRA: LinearAlgebraApi,
        TagValues.MACHINE_LEARNING: MachineLearningApi,
        TagValues.STATS: StatsApi,
        TagValues.GRADIENT_DESCENT: GradientDescentApi,
        TagValues.MYSQRT: MysqrtApi,
        TagValues.STRENGTH: StrengthApi,
    }
)
