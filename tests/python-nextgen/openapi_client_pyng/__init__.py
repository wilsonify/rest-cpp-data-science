# coding: utf-8

# flake8: noqa

"""
    rest-cpp-data-science

    data science REST API endpoints, parameters, and responses, including information about preprocessing data, training models, making predictions, and evaluating models.  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

__version__ = "1.0.0"

# import apis into sdk package
from openapi_client_pyng.api.echo_api import EchoApi
from openapi_client_pyng.api.gradient_descent_api import GradientDescentApi
from openapi_client_pyng.api.linear_algebra_api import LinearAlgebraApi
from openapi_client_pyng.api.machine_learning_api import MachineLearningApi
from openapi_client_pyng.api.mysqrt_api import MysqrtApi
from openapi_client_pyng.api.stats_api import StatsApi
from openapi_client_pyng.api.strength_api import StrengthApi

# import ApiClient
from openapi_client_pyng.api_client import ApiClient
from openapi_client_pyng.configuration import Configuration
from openapi_client_pyng.exceptions import OpenApiException
from openapi_client_pyng.exceptions import ApiTypeError
from openapi_client_pyng.exceptions import ApiValueError
from openapi_client_pyng.exceptions import ApiKeyError
from openapi_client_pyng.exceptions import ApiAttributeError
from openapi_client_pyng.exceptions import ApiException
# import models into sdk package
from openapi_client_pyng.models.accuracy_input import AccuracyInput
from openapi_client_pyng.models.bucketize_input import BucketizeInput
from openapi_client_pyng.models.bucketize_output import BucketizeOutput
from openapi_client_pyng.models.correlation_input import CorrelationInput
from openapi_client_pyng.models.correlation_matrix_input import CorrelationMatrixInput
from openapi_client_pyng.models.correlation_matrix_output import CorrelationMatrixOutput
from openapi_client_pyng.models.correlation_output import CorrelationOutput
from openapi_client_pyng.models.covariance_input import CovarianceInput
from openapi_client_pyng.models.covariance_output import CovarianceOutput
from openapi_client_pyng.models.data_range_input import DataRangeInput
from openapi_client_pyng.models.data_range_output import DataRangeOutput
from openapi_client_pyng.models.de_mean_input import DeMeanInput
from openapi_client_pyng.models.de_mean_output import DeMeanOutput
from openapi_client_pyng.models.difference_quotient_input import DifferenceQuotientInput
from openapi_client_pyng.models.difference_quotient_output import DifferenceQuotientOutput
from openapi_client_pyng.models.distance_input import DistanceInput
from openapi_client_pyng.models.distance_output import DistanceOutput
from openapi_client_pyng.models.dot_input import DotInput
from openapi_client_pyng.models.dot_output import DotOutput
from openapi_client_pyng.models.estimate_gradient_input import EstimateGradientInput
from openapi_client_pyng.models.estimate_gradient_output import EstimateGradientOutput
from openapi_client_pyng.models.f1_score_input import F1ScoreInput
from openapi_client_pyng.models.get_column_input import GetColumnInput
from openapi_client_pyng.models.get_column_output import GetColumnOutput
from openapi_client_pyng.models.get_row_input import GetRowInput
from openapi_client_pyng.models.get_row_output import GetRowOutput
from openapi_client_pyng.models.in_random_order_input import InRandomOrderInput
from openapi_client_pyng.models.interquartile_range_input import InterquartileRangeInput
from openapi_client_pyng.models.magnitude_input import MagnitudeInput
from openapi_client_pyng.models.matrix_add_input import MatrixAddInput
from openapi_client_pyng.models.maximize_batch_input import MaximizeBatchInput
from openapi_client_pyng.models.maximize_batch_output import MaximizeBatchOutput
from openapi_client_pyng.models.maximize_stochastic_input import MaximizeStochasticInput
from openapi_client_pyng.models.maximize_stochastic_output import MaximizeStochasticOutput
from openapi_client_pyng.models.mean_input import MeanInput
from openapi_client_pyng.models.median_input import MedianInput
from openapi_client_pyng.models.minimize_batch_input import MinimizeBatchInput
from openapi_client_pyng.models.minimize_batch_output import MinimizeBatchOutput
from openapi_client_pyng.models.minimize_stochastic_input import MinimizeStochasticInput
from openapi_client_pyng.models.minimize_stochastic_output import MinimizeStochasticOutput
from openapi_client_pyng.models.mode_input import ModeInput
from openapi_client_pyng.models.partial_difference_quotient_input import PartialDifferenceQuotientInput
from openapi_client_pyng.models.partial_difference_quotient_output import PartialDifferenceQuotientOutput
from openapi_client_pyng.models.precision_input import PrecisionInput
from openapi_client_pyng.models.quantile_input import QuantileInput
from openapi_client_pyng.models.recall_input import RecallInput
from openapi_client_pyng.models.scalar_multiply_input import ScalarMultiplyInput
from openapi_client_pyng.models.shape_input import ShapeInput
from openapi_client_pyng.models.shape_output import ShapeOutput
from openapi_client_pyng.models.split_data_input import SplitDataInput
from openapi_client_pyng.models.split_data_output import SplitDataOutput
from openapi_client_pyng.models.sqrt_input import SqrtInput
from openapi_client_pyng.models.sqrt_output import SqrtOutput
from openapi_client_pyng.models.squared_distance_input import SquaredDistanceInput
from openapi_client_pyng.models.standard_deviation_input import StandardDeviationInput
from openapi_client_pyng.models.strength_input import StrengthInput
from openapi_client_pyng.models.strength_output import StrengthOutput
from openapi_client_pyng.models.sum_of_squares_input import SumOfSquaresInput
from openapi_client_pyng.models.train_test_split_input import TrainTestSplitInput
from openapi_client_pyng.models.train_test_split_output import TrainTestSplitOutput
from openapi_client_pyng.models.variance_input import VarianceInput
from openapi_client_pyng.models.vector_add_input import VectorAddInput
from openapi_client_pyng.models.vector_mean_input import VectorMeanInput
from openapi_client_pyng.models.vector_subtract_input import VectorSubtractInput
from openapi_client_pyng.models.vector_sum_input import VectorSumInput