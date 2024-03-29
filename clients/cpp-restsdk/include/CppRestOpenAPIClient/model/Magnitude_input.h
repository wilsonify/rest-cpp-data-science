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
 * Magnitude_input.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Magnitude_input_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Magnitude_input_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Magnitude_input
    : public ModelBase
{
public:
    Magnitude_input();
    virtual ~Magnitude_input();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Magnitude_input members

    /// <summary>
    /// 
    /// </summary>
    std::vector<double>& getV();
    bool VIsSet() const;
    void unsetv();

    void setV(std::vector<double> value);


protected:
    std::vector<double> m_v;
    bool m_vIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Magnitude_input_H_ */
