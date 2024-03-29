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

#include "StatsApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

const std::string StatsApi::base = "";

StatsApi::StatsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr)
{
}

void StatsApi::init() {
    setupRoutes();
}

void StatsApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Post(*router, base + "/bucketize", Routes::bind(&StatsApi::bucketize_handler, this));
    Routes::Post(*router, base + "/correlation", Routes::bind(&StatsApi::correlation_handler, this));
    Routes::Post(*router, base + "/correlation_matrix", Routes::bind(&StatsApi::correlation_matrix_handler, this));
    Routes::Post(*router, base + "/covariance", Routes::bind(&StatsApi::covariance_handler, this));
    Routes::Post(*router, base + "/data_range", Routes::bind(&StatsApi::data_range_handler, this));
    Routes::Post(*router, base + "/de_mean", Routes::bind(&StatsApi::de_mean_handler, this));
    Routes::Post(*router, base + "/interquartile_range", Routes::bind(&StatsApi::interquartile_range_handler, this));
    Routes::Post(*router, base + "/mean", Routes::bind(&StatsApi::mean_handler, this));
    Routes::Post(*router, base + "/median", Routes::bind(&StatsApi::median_handler, this));
    Routes::Post(*router, base + "/mode", Routes::bind(&StatsApi::mode_handler, this));
    Routes::Post(*router, base + "/quantile", Routes::bind(&StatsApi::quantile_handler, this));
    Routes::Post(*router, base + "/recall", Routes::bind(&StatsApi::recall_handler, this));
    Routes::Post(*router, base + "/standard_deviation", Routes::bind(&StatsApi::standard_deviation_handler, this));
    Routes::Post(*router, base + "/variance", Routes::bind(&StatsApi::variance_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&StatsApi::stats_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> StatsApi::handleParsingException(const std::exception& ex) const noexcept
{
    try {
        throw;
    } catch (nlohmann::detail::exception &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (org::openapitools::server::helpers::ValidationException &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (std::exception &e) {
        return std::make_pair(Pistache::Http::Code::Internal_Server_Error, e.what());
    }
}

std::pair<Pistache::Http::Code, std::string> StatsApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void StatsApi::bucketize_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Bucketize_input bucketizeInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(bucketizeInput);
        bucketizeInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->bucketizer(bucketizeInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::correlation_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Correlation_input correlationInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(correlationInput);
        correlationInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->correlation_control(correlationInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::correlation_matrix_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Correlation_matrix_input correlationMatrixInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(correlationMatrixInput);
        correlationMatrixInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->correlation_matrix_control(correlationMatrixInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::covariance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Covariance_input covarianceInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(covarianceInput);
        covarianceInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->covariance_control(covarianceInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::data_range_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Data_range_input dataRangeInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(dataRangeInput);
        dataRangeInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->data_range_control(dataRangeInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::de_mean_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    De_mean_input deMeanInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(deMeanInput);
        deMeanInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->de_mean_control(deMeanInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::interquartile_range_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Interquartile_range_input interquartileRangeInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(interquartileRangeInput);
        interquartileRangeInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->interquartile_range_control(interquartileRangeInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::mean_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Mean_input meanInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(meanInput);
        meanInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->mean_control(meanInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::median_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Median_input medianInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(medianInput);
        medianInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->median_control(medianInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::mode_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Mode_input modeInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(modeInput);
        modeInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->mode_control(modeInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::quantile_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Quantile_input quantileInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(quantileInput);
        quantileInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->quantile_control(quantileInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::recall_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Recall_input recallInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(recallInput);
        recallInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->recall_control(recallInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::standard_deviation_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Standard_deviation_input standardDeviationInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(standardDeviationInput);
        standardDeviationInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->standard_deviation_control(standardDeviationInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void StatsApi::variance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Variance_input varianceInput;
    
    try {
        nlohmann::json::parse(request.body()).get_to(varianceInput);
        varianceInput.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->variance_control(varianceInput, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}

void StatsApi::stats_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api

