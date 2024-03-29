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
* GradientDescentApiImpl.h
*
* 
*/

#ifndef GRADIENT_DESCENT_API_IMPL_H_
#define GRADIENT_DESCENT_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <GradientDescentApi.h>


#include "Difference_quotient_input.h"
#include "Difference_quotient_output.h"
#include "Estimate_gradient_input.h"
#include "Estimate_gradient_output.h"
#include "In_random_order_input.h"
#include "Maximize_batch_input.h"
#include "Maximize_batch_output.h"
#include "Maximize_stochastic_input.h"
#include "Maximize_stochastic_output.h"
#include "Minimize_batch_input.h"
#include "Minimize_batch_output.h"
#include "Minimize_stochastic_input.h"
#include "Minimize_stochastic_output.h"
#include "Partial_difference_quotient_input.h"
#include "Partial_difference_quotient_output.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class GradientDescentApiImpl : public org::openapitools::server::api::GradientDescentApi {
public:
    explicit GradientDescentApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~GradientDescentApiImpl() override = default;

    void difference_quotient(const Difference_quotient_input &differenceQuotientInput, Pistache::Http::ResponseWriter &response);
    void estimate_gradient(const Estimate_gradient_input &estimateGradientInput, Pistache::Http::ResponseWriter &response);
    void in_random_order(const In_random_order_input &inRandomOrderInput, Pistache::Http::ResponseWriter &response);
    void maximize_batch(const Maximize_batch_input &maximizeBatchInput, Pistache::Http::ResponseWriter &response);
    void maximize_stochastic(const Maximize_stochastic_input &maximizeStochasticInput, Pistache::Http::ResponseWriter &response);
    void minimize_batch(const Minimize_batch_input &minimizeBatchInput, Pistache::Http::ResponseWriter &response);
    void minimize_stochastic(const Minimize_stochastic_input &minimizeStochasticInput, Pistache::Http::ResponseWriter &response);
    void partial_difference_quotient(const Partial_difference_quotient_input &partialDifferenceQuotientInput, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
