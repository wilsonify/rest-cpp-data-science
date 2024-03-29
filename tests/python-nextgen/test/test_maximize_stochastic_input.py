# coding: utf-8

"""
    rest-cpp-data-science

    data science REST API endpoints, parameters, and responses, including information about preprocessing data, training models, making predictions, and evaluating models.  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client_pyng
from openapi_client_pyng.models.maximize_stochastic_input import MaximizeStochasticInput  # noqa: E501
from openapi_client_pyng.rest import ApiException

class TestMaximizeStochasticInput(unittest.TestCase):
    """MaximizeStochasticInput unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test MaximizeStochasticInput
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # uncomment below to create an instance of `MaximizeStochasticInput`
        """
        model = openapi_client_pyng.models.maximize_stochastic_input.MaximizeStochasticInput()  # noqa: E501
        if include_optional :
            return MaximizeStochasticInput(
                x = [[1, 49, 4, 0], [1, 41, 9, 0], [1, 40, 8, 0], [1, 25, 6, 0], [1, 21, 1, 0], [1, 21, 0, 0], [1, 19, 3, 0], [1, 19, 0, 0], [1, 18, 9, 0], [1, 18, 8, 0]], 
                y = [68.77, 51.25, 52.08, 38.36, 44.54, 57.13, 51.4, 41.42, 31.22, 34.76]
            )
        else :
            return MaximizeStochasticInput(
        )
        """

    def testMaximizeStochasticInput(self):
        """Test MaximizeStochasticInput"""
        # inst_req_only = self.make_instance(include_optional=False)
        # inst_req_and_optional = self.make_instance(include_optional=True)

if __name__ == '__main__':
    unittest.main()
