# coding: utf-8

"""
    rest-cpp-data-science

    data science REST API endpoints, parameters, and responses, including information about preprocessing data, training models, making predictions, and evaluating models.  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest

import openapi_client_pyng
from openapi_client_pyng.api.machine_learning_api import MachineLearningApi  # noqa: E501
from openapi_client_pyng.rest import ApiException


class TestMachineLearningApi(unittest.TestCase):
    """MachineLearningApi unit test stubs"""

    def setUp(self):
        self.api = openapi_client_pyng.api.machine_learning_api.MachineLearningApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_accracy_post(self):
        """Test case for accracy_post

        """
        pass

    def test_f1_score_post(self):
        """Test case for f1_score_post

        """
        pass

    def test_precision_post(self):
        """Test case for precision_post

        """
        pass

    def test_split_data_post(self):
        """Test case for split_data_post

        """
        pass

    def test_train_test_split_post(self):
        """Test case for train_test_split_post

        """
        pass


if __name__ == '__main__':
    unittest.main()