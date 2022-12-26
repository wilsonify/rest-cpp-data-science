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
 * Sqrt_output.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Sqrt_output_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Sqrt_output_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Sqrt_output
    : public ModelBase
{
public:
    Sqrt_output();
    virtual ~Sqrt_output();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Sqrt_output members

    /// <summary>
    /// 
    /// </summary>
    double getX() const;
    bool XIsSet() const;
    void unsetx();

    void setX(double value);

    /// <summary>
    /// 
    /// </summary>
    double getResult() const;
    bool resultIsSet() const;
    void unsetResult();

    void setResult(double value);


protected:
    double m_x;
    bool m_xIsSet;
    double m_Result;
    bool m_ResultIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Sqrt_output_H_ */