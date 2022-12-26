# coding: utf-8

"""
    rest-cpp-data-science

    data science REST API endpoints, parameters, and responses, including information about preprocessing data, training models, making predictions, and evaluating models.  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Generated by: https://openapi-generator.tech
"""

from __future__ import absolute_import

import unittest

import pytest

import openapi_client_pyng
from openapi_client_pyng.models.accuracy_input import AccuracyInput  # noqa: E501


class TestAccuracyInput(unittest.TestCase):
    """AccuracyInput unit test stubs"""

    def setUp(self):
        self.api = openapi_client_pyng.api.MachineLearningApi()  # noqa: E501

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test AccuracyInput
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # uncomment below to create an instance of `AccuracyInput`
        """
        model = openapi_client_pyng.models.accuracy_input.AccuracyInput()  # noqa: E501
        if include_optional :
            return AccuracyInput(
                tp = 1.337, 
                fp = 1.337, 
                fn = 1.337, 
                tn = 1.337
            )
        else :
            return AccuracyInput(
        )
        """

    def testAccuracyInput(self):
        """Test AccuracyInput"""
        # inst_req_only = self.make_instance(include_optional=False)
        # inst_req_and_optional = self.make_instance(include_optional=True)
        response = self.api.accracy_post(AccuracyInput(
            tp=100.0,
            fp=100.0,
            tn=100.0,
            fn=100.0
        ))

        assert response == pytest.approx(0.5, abs=0.01)


if __name__ == '__main__':
    unittest.main()
