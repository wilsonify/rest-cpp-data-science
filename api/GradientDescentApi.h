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
 * GradientDescentApi.h
 *
 * 
 */

#ifndef GradientDescentApi_H_
#define GradientDescentApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

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

class  GradientDescentApi {
public:
    explicit GradientDescentApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    virtual ~GradientDescentApi() = default;
    void init();

    static const std::string base;

private:
    void setupRoutes();

    void difference_quotient_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void estimate_gradient_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void in_random_order_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void maximize_batch_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void maximize_stochastic_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void minimize_batch_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void minimize_stochastic_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void partial_difference_quotient_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void gradient_descent_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    const std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during Parameter parsing and validation.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during processing of the request in handler functions.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(const std::exception& ex) const noexcept;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Description of the endpoint
    /// </remarks>
    /// <param name="differenceQuotientInput"> (optional)</param>
    virtual void difference_quotient(const org::openapitools::server::model::Difference_quotient_input &differenceQuotientInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Description of the endpoint
    /// </remarks>
    /// <param name="estimateGradientInput"> (optional)</param>
    virtual void estimate_gradient(const org::openapitools::server::model::Estimate_gradient_input &estimateGradientInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Description of the endpoint
    /// </remarks>
    /// <param name="inRandomOrderInput"> (optional)</param>
    virtual void in_random_order(const org::openapitools::server::model::In_random_order_input &inRandomOrderInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// use gradient descent to find theta that minimizes target function
    /// </remarks>
    /// <param name="maximizeBatchInput"> (optional)</param>
    virtual void maximize_batch(const org::openapitools::server::model::Maximize_batch_input &maximizeBatchInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Description of the endpoint
    /// </remarks>
    /// <param name="maximizeStochasticInput"> (optional)</param>
    virtual void maximize_stochastic(const org::openapitools::server::model::Maximize_stochastic_input &maximizeStochasticInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Description of the endpoint
    /// </remarks>
    /// <param name="minimizeBatchInput"> (optional)</param>
    virtual void minimize_batch(const org::openapitools::server::model::Minimize_batch_input &minimizeBatchInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Description of the endpoint
    /// </remarks>
    /// <param name="minimizeStochasticInput"> (optional)</param>
    virtual void minimize_stochastic(const org::openapitools::server::model::Minimize_stochastic_input &minimizeStochasticInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// add h to just the i-th element of v
    /// </remarks>
    /// <param name="partialDifferenceQuotientInput"> (optional)</param>
    virtual void partial_difference_quotient(const org::openapitools::server::model::Partial_difference_quotient_input &partialDifferenceQuotientInput, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* GradientDescentApi_H_ */

