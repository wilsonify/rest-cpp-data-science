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
* MachineLearningApiImpl.h
*
* 
*/

#ifndef MACHINE_LEARNING_API_IMPL_H_
#define MACHINE_LEARNING_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <MachineLearningApi.h>


#include "Accuracy_input.h"
#include "F1_score_input.h"
#include "Precision_input.h"
#include "Split_data_input.h"
#include "Split_data_output.h"
#include "Train_test_split_input.h"
#include "Train_test_split_output.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class MachineLearningApiImpl : public org::openapitools::server::api::MachineLearningApi {
public:
    explicit MachineLearningApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~MachineLearningApiImpl() override = default;

    void accuracy(const Accuracy_input &accuracyInput, Pistache::Http::ResponseWriter &response);
    void f1_score(const F1_score_input &f1ScoreInput, Pistache::Http::ResponseWriter &response);
    void precision(const Precision_input &precisionInput, Pistache::Http::ResponseWriter &response);
    void split_data(const Split_data_input &splitDataInput, Pistache::Http::ResponseWriter &response);
    void train_test_split(const Train_test_split_input &trainTestSplitInput, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
