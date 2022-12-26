import typing_extensions

from openapi_client_py.paths import PathValues
from openapi_client_py.apis.paths.sqrt import Sqrt
from openapi_client_py.apis.paths.strength import Strength
from openapi_client_py.apis.paths.accracy import Accracy
from openapi_client_py.apis.paths.bucketize import Bucketize
from openapi_client_py.apis.paths.correlation import Correlation
from openapi_client_py.apis.paths.correlation_matrix import CorrelationMatrix
from openapi_client_py.apis.paths.covariance import Covariance
from openapi_client_py.apis.paths.data_range import DataRange
from openapi_client_py.apis.paths.de_mean import DeMean
from openapi_client_py.apis.paths.difference_quotient import DifferenceQuotient
from openapi_client_py.apis.paths.distance import Distance
from openapi_client_py.apis.paths.dot import Dot
from openapi_client_py.apis.paths.echo import Echo
from openapi_client_py.apis.paths.estimate_gradient import EstimateGradient
from openapi_client_py.apis.paths.f1_score import F1Score
from openapi_client_py.apis.paths.get_column import GetColumn
from openapi_client_py.apis.paths.get_row import GetRow
from openapi_client_py.apis.paths.in_random_order import InRandomOrder
from openapi_client_py.apis.paths.interquartile_range import InterquartileRange
from openapi_client_py.apis.paths.magnitude import Magnitude
from openapi_client_py.apis.paths.matrix_add import MatrixAdd
from openapi_client_py.apis.paths.maximize_batch import MaximizeBatch
from openapi_client_py.apis.paths.maximize_stochastic import MaximizeStochastic
from openapi_client_py.apis.paths.mean import Mean
from openapi_client_py.apis.paths.median import Median
from openapi_client_py.apis.paths.minimize_batch import MinimizeBatch
from openapi_client_py.apis.paths.minimize_stochastic import MinimizeStochastic
from openapi_client_py.apis.paths.mode import Mode
from openapi_client_py.apis.paths.partial_difference_quotient import PartialDifferenceQuotient
from openapi_client_py.apis.paths.precision import Precision
from openapi_client_py.apis.paths.quantile import Quantile
from openapi_client_py.apis.paths.recall import Recall
from openapi_client_py.apis.paths.scalar_multiply import ScalarMultiply
from openapi_client_py.apis.paths.shape import Shape
from openapi_client_py.apis.paths.split_data import SplitData
from openapi_client_py.apis.paths.squared_distance import SquaredDistance
from openapi_client_py.apis.paths.standard_deviation import StandardDeviation
from openapi_client_py.apis.paths.sum_of_squares import SumOfSquares
from openapi_client_py.apis.paths.train_test_split import TrainTestSplit
from openapi_client_py.apis.paths.variance import Variance
from openapi_client_py.apis.paths.vector_add import VectorAdd
from openapi_client_py.apis.paths.vector_mean import VectorMean
from openapi_client_py.apis.paths.vector_subtract import VectorSubtract
from openapi_client_py.apis.paths.vector_sum import VectorSum

PathToApi = typing_extensions.TypedDict(
    'PathToApi',
    {
        PathValues.SQRT: Sqrt,
        PathValues.STRENGTH: Strength,
        PathValues.ACCRACY: Accracy,
        PathValues.BUCKETIZE: Bucketize,
        PathValues.CORRELATION: Correlation,
        PathValues.CORRELATION_MATRIX: CorrelationMatrix,
        PathValues.COVARIANCE: Covariance,
        PathValues.DATA_RANGE: DataRange,
        PathValues.DE_MEAN: DeMean,
        PathValues.DIFFERENCE_QUOTIENT: DifferenceQuotient,
        PathValues.DISTANCE: Distance,
        PathValues.DOT: Dot,
        PathValues.ECHO: Echo,
        PathValues.ESTIMATE_GRADIENT: EstimateGradient,
        PathValues.F1_SCORE: F1Score,
        PathValues.GET_COLUMN: GetColumn,
        PathValues.GET_ROW: GetRow,
        PathValues.IN_RANDOM_ORDER: InRandomOrder,
        PathValues.INTERQUARTILE_RANGE: InterquartileRange,
        PathValues.MAGNITUDE: Magnitude,
        PathValues.MATRIX_ADD: MatrixAdd,
        PathValues.MAXIMIZE_BATCH: MaximizeBatch,
        PathValues.MAXIMIZE_STOCHASTIC: MaximizeStochastic,
        PathValues.MEAN: Mean,
        PathValues.MEDIAN: Median,
        PathValues.MINIMIZE_BATCH: MinimizeBatch,
        PathValues.MINIMIZE_STOCHASTIC: MinimizeStochastic,
        PathValues.MODE: Mode,
        PathValues.PARTIAL_DIFFERENCE_QUOTIENT: PartialDifferenceQuotient,
        PathValues.PRECISION: Precision,
        PathValues.QUANTILE: Quantile,
        PathValues.RECALL: Recall,
        PathValues.SCALAR_MULTIPLY: ScalarMultiply,
        PathValues.SHAPE: Shape,
        PathValues.SPLIT_DATA: SplitData,
        PathValues.SQUARED_DISTANCE: SquaredDistance,
        PathValues.STANDARD_DEVIATION: StandardDeviation,
        PathValues.SUM_OF_SQUARES: SumOfSquares,
        PathValues.TRAIN_TEST_SPLIT: TrainTestSplit,
        PathValues.VARIANCE: Variance,
        PathValues.VECTOR_ADD: VectorAdd,
        PathValues.VECTOR_MEAN: VectorMean,
        PathValues.VECTOR_SUBTRACT: VectorSubtract,
        PathValues.VECTOR_SUM: VectorSum,
    }
)

path_to_api = PathToApi(
    {
        PathValues.SQRT: Sqrt,
        PathValues.STRENGTH: Strength,
        PathValues.ACCRACY: Accracy,
        PathValues.BUCKETIZE: Bucketize,
        PathValues.CORRELATION: Correlation,
        PathValues.CORRELATION_MATRIX: CorrelationMatrix,
        PathValues.COVARIANCE: Covariance,
        PathValues.DATA_RANGE: DataRange,
        PathValues.DE_MEAN: DeMean,
        PathValues.DIFFERENCE_QUOTIENT: DifferenceQuotient,
        PathValues.DISTANCE: Distance,
        PathValues.DOT: Dot,
        PathValues.ECHO: Echo,
        PathValues.ESTIMATE_GRADIENT: EstimateGradient,
        PathValues.F1_SCORE: F1Score,
        PathValues.GET_COLUMN: GetColumn,
        PathValues.GET_ROW: GetRow,
        PathValues.IN_RANDOM_ORDER: InRandomOrder,
        PathValues.INTERQUARTILE_RANGE: InterquartileRange,
        PathValues.MAGNITUDE: Magnitude,
        PathValues.MATRIX_ADD: MatrixAdd,
        PathValues.MAXIMIZE_BATCH: MaximizeBatch,
        PathValues.MAXIMIZE_STOCHASTIC: MaximizeStochastic,
        PathValues.MEAN: Mean,
        PathValues.MEDIAN: Median,
        PathValues.MINIMIZE_BATCH: MinimizeBatch,
        PathValues.MINIMIZE_STOCHASTIC: MinimizeStochastic,
        PathValues.MODE: Mode,
        PathValues.PARTIAL_DIFFERENCE_QUOTIENT: PartialDifferenceQuotient,
        PathValues.PRECISION: Precision,
        PathValues.QUANTILE: Quantile,
        PathValues.RECALL: Recall,
        PathValues.SCALAR_MULTIPLY: ScalarMultiply,
        PathValues.SHAPE: Shape,
        PathValues.SPLIT_DATA: SplitData,
        PathValues.SQUARED_DISTANCE: SquaredDistance,
        PathValues.STANDARD_DEVIATION: StandardDeviation,
        PathValues.SUM_OF_SQUARES: SumOfSquares,
        PathValues.TRAIN_TEST_SPLIT: TrainTestSplit,
        PathValues.VARIANCE: Variance,
        PathValues.VECTOR_ADD: VectorAdd,
        PathValues.VECTOR_MEAN: VectorMean,
        PathValues.VECTOR_SUBTRACT: VectorSubtract,
        PathValues.VECTOR_SUM: VectorSum,
    }
)
