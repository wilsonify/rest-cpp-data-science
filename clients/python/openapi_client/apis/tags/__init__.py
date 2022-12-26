# do not import all endpoints into this module because that uses a lot of memory and stack frames
# if you need the ability to import all endpoints from this module, import them with
# from openapi_client_py.apis.tag_to_api import tag_to_api

import enum


class TagValues(str, enum.Enum):
    MATH = "math"
    ECHO = "echo"
    LINEAR_ALGEBRA = "linear_algebra"
    MACHINE_LEARNING = "machine_learning"
    STATS = "stats"
    GRADIENT_DESCENT = "gradient_descent"
    MYSQRT = "mysqrt"
    STRENGTH = "strength"
