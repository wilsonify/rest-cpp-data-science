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
 * MachineLearningApi.h
 *
 * 
 */

#ifndef MachineLearningApi_H_
#define MachineLearningApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "Accuracy_input.h"
#include "F1_score_input.h"
#include "Precision_input.h"
#include "Split_data_input.h"
#include "Split_data_output.h"
#include "Train_test_split_input.h"
#include "Train_test_split_output.h"

namespace org::openapitools::server::api
{

class  MachineLearningApi {
public:
    explicit MachineLearningApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    virtual ~MachineLearningApi() = default;
    void init();

    static const std::string base;

private:
    void setupRoutes();

    void accuracy_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void f1_score_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void precision_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void split_data_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void train_test_split_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void machine_learning_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

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
    /// <param name="accuracyInput"> (optional)</param>
    virtual void accuracy_control(const org::openapitools::server::model::Accuracy_input &accuracyInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Description of the endpoint
    /// </remarks>
    /// <param name="f1ScoreInput"> (optional)</param>
    virtual void f1_score_control(const org::openapitools::server::model::F1_score_input &f1ScoreInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Description of the endpoint
    /// </remarks>
    /// <param name="precisionInput"> (optional)</param>
    virtual void precision_control(const org::openapitools::server::model::Precision_input &precisionInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Description of the endpoint
    /// </remarks>
    /// <param name="splitDataInput"> (optional)</param>
    virtual void split_data_control(const org::openapitools::server::model::Split_data_input &splitDataInput, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Description of the endpoint
    /// </remarks>
    /// <param name="trainTestSplitInput"> (optional)</param>
    virtual void train_test_split_control(const org::openapitools::server::model::Train_test_split_input &trainTestSplitInput, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* MachineLearningApi_H_ */

