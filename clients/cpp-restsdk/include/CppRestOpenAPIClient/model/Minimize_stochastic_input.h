/**
 * rest-cpp-data-science
 * data science REST API endpoints, parameters, and responses, including information about preprocessing data, training models, making predictions, and evaluating models.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Minimize_stochastic_input.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Minimize_stochastic_input_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Minimize_stochastic_input_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Minimize_stochastic_input
    : public ModelBase
{
public:
    Minimize_stochastic_input();
    virtual ~Minimize_stochastic_input();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Minimize_stochastic_input members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::vector<double>>& getX();
    bool XIsSet() const;
    void unsetx();

    void setX(const std::vector<std::vector<double>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<double>& getY();
    bool YIsSet() const;
    void unsety();

    void setY(std::vector<double> value);


protected:
    std::vector<std::vector<double>> m_x;
    bool m_xIsSet;
    std::vector<double> m_y;
    bool m_yIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Minimize_stochastic_input_H_ */
