/**
* Minimal Pistache
* This is a sample server
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* LinearAlgebraApiImpl.h
*
* 
*/

#ifndef LINEAR_ALGEBRA_API_IMPL_H_
#define LINEAR_ALGEBRA_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <LinearAlgebraApi.h>


#include "Distance_input.h"
#include "Distance_output.h"
#include "Dot_input.h"
#include "Dot_output.h"
#include "Get_column_input.h"
#include "Get_column_output.h"
#include "Get_row_input.h"
#include "Get_row_output.h"
#include "Magnitude_input.h"
#include "Matrix_add_input.h"
#include "Scalar_multiply_input.h"
#include "Shape_input.h"
#include "Shape_output.h"
#include "Squared_distance_input.h"
#include "Sum_of_squares_input.h"
#include "Vector_add_input.h"
#include "Vector_mean_input.h"
#include "Vector_subtract_input.h"
#include "Vector_sum_input.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class LinearAlgebraApiImpl : public org::openapitools::server::api::LinearAlgebraApi {
public:
    explicit LinearAlgebraApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~LinearAlgebraApiImpl() override = default;

    void distance(const Distance_input &distanceInput, Pistache::Http::ResponseWriter &response);
    void dot(const Dot_input &dotInput, Pistache::Http::ResponseWriter &response);
    void get_column(const Get_column_input &getColumnInput, Pistache::Http::ResponseWriter &response);
    void get_row(const Get_row_input &getRowInput, Pistache::Http::ResponseWriter &response);
    void magnitude(const Magnitude_input &magnitudeInput, Pistache::Http::ResponseWriter &response);
    void matrix_add(const Matrix_add_input &matrixAddInput, Pistache::Http::ResponseWriter &response);
    void scalar_multiply(const Scalar_multiply_input &scalarMultiplyInput, Pistache::Http::ResponseWriter &response);
    void shape(const Shape_input &shapeInput, Pistache::Http::ResponseWriter &response);
    void squared_distance(const Squared_distance_input &squaredDistanceInput, Pistache::Http::ResponseWriter &response);
    void sum_of_squares(const Sum_of_squares_input &sumOfSquaresInput, Pistache::Http::ResponseWriter &response);
    void vector_add(const Vector_add_input &vectorAddInput, Pistache::Http::ResponseWriter &response);
    void vector_mean(const Vector_mean_input &vectorMeanInput, Pistache::Http::ResponseWriter &response);
    void vector_subtract(const Vector_subtract_input &vectorSubtractInput, Pistache::Http::ResponseWriter &response);
    void vector_sum(const Vector_sum_input &vectorSumInput, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif