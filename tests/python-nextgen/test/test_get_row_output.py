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
from openapi_client_pyng.models.get_row_output import GetRowOutput  # noqa: E501
from openapi_client_pyng.rest import ApiException

class TestGetRowOutput(unittest.TestCase):
    """GetRowOutput unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test GetRowOutput
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # uncomment below to create an instance of `GetRowOutput`
        """
        model = openapi_client_pyng.models.get_row_output.GetRowOutput()  # noqa: E501
        if include_optional :
            return GetRowOutput(
                x = 1.337, 
                result = 1.337
            )
        else :
            return GetRowOutput(
        )
        """

    def testGetRowOutput(self):
        """Test GetRowOutput"""
        # inst_req_only = self.make_instance(include_optional=False)
        # inst_req_and_optional = self.make_instance(include_optional=True)

if __name__ == '__main__':
    unittest.main()
