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
 * Strength_input.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Strength_input_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Strength_input_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Strength_input
    : public ModelBase
{
public:
    Strength_input();
    virtual ~Strength_input();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Strength_input members

    /// <summary>
    /// 
    /// </summary>
    int32_t getActual() const;
    bool actualIsSet() const;
    void unsetActual();

    void setActual(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getExpected() const;
    bool expectedIsSet() const;
    void unsetExpected();

    void setExpected(int32_t value);


protected:
    int32_t m_Actual;
    bool m_ActualIsSet;
    int32_t m_Expected;
    bool m_ExpectedIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Strength_input_H_ */
