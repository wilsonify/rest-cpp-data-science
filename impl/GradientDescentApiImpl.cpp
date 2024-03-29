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

#include "GradientDescentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

GradientDescentApiImpl::GradientDescentApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : GradientDescentApi(rtr)
{
}

void GradientDescentApiImpl::difference_quotient(const Difference_quotient_input &differenceQuotientInput, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void GradientDescentApiImpl::estimate_gradient(const Estimate_gradient_input &estimateGradientInput, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void GradientDescentApiImpl::in_random_order(const In_random_order_input &inRandomOrderInput, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void GradientDescentApiImpl::maximize_batch(const Maximize_batch_input &maximizeBatchInput, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void GradientDescentApiImpl::maximize_stochastic(const Maximize_stochastic_input &maximizeStochasticInput, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void GradientDescentApiImpl::minimize_batch(const Minimize_batch_input &minimizeBatchInput, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void GradientDescentApiImpl::minimize_stochastic(const Minimize_stochastic_input &minimizeStochasticInput, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void GradientDescentApiImpl::partial_difference_quotient(const Partial_difference_quotient_input &partialDifferenceQuotientInput, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

