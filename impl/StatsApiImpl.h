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
* StatsApiImpl.h
*
* 
*/

#ifndef STATS_API_IMPL_H_
#define STATS_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <StatsApi.h>


#include "Bucketize_input.h"
#include "Bucketize_output.h"
#include "Correlation_input.h"
#include "Correlation_matrix_input.h"
#include "Correlation_matrix_output.h"
#include "Correlation_output.h"
#include "Covariance_input.h"
#include "Covariance_output.h"
#include "Data_range_input.h"
#include "Data_range_output.h"
#include "De_mean_input.h"
#include "De_mean_output.h"
#include "Interquartile_range_input.h"
#include "Mean_input.h"
#include "Median_input.h"
#include "Mode_input.h"
#include "Quantile_input.h"
#include "Recall_input.h"
#include "Standard_deviation_input.h"
#include "Variance_input.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class StatsApiImpl : public org::openapitools::server::api::StatsApi {
public:
    explicit StatsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~StatsApiImpl() override = default;

    void bucketizer(const Bucketize_input &bucketizeInput, Pistache::Http::ResponseWriter &response);
    void correlation_control(const Correlation_input &correlationInput, Pistache::Http::ResponseWriter &response);
    void correlation_matrix(const Correlation_matrix_input &correlationMatrixInput, Pistache::Http::ResponseWriter &response);
    void covariance(const Covariance_input &covarianceInput, Pistache::Http::ResponseWriter &response);
    void data_range(const Data_range_input &dataRangeInput, Pistache::Http::ResponseWriter &response);
    void de_mean(const De_mean_input &deMeanInput, Pistache::Http::ResponseWriter &response);
    void interquartile_range(const Interquartile_range_input &interquartileRangeInput, Pistache::Http::ResponseWriter &response);
    void mean(const Mean_input &meanInput, Pistache::Http::ResponseWriter &response);
    void median(const Median_input &medianInput, Pistache::Http::ResponseWriter &response);
    void mode(const Mode_input &modeInput, Pistache::Http::ResponseWriter &response);
    void quantile(const Quantile_input &quantileInput, Pistache::Http::ResponseWriter &response);
    void recall(const Recall_input &recallInput, Pistache::Http::ResponseWriter &response);
    void standard_deviation(const Standard_deviation_input &standardDeviationInput, Pistache::Http::ResponseWriter &response);
    void variance(const Variance_input &varianceInput, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
