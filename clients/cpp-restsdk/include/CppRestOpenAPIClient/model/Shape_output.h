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
 * Shape_output.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Shape_output_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Shape_output_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Shape_output
    : public ModelBase
{
public:
    Shape_output();
    virtual ~Shape_output();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Shape_output members

    /// <summary>
    /// 
    /// </summary>
    double getNrows() const;
    bool nrowsIsSet() const;
    void unsetNrows();

    void setNrows(double value);

    /// <summary>
    /// 
    /// </summary>
    double getNcols() const;
    bool ncolsIsSet() const;
    void unsetNcols();

    void setNcols(double value);


protected:
    double m_Nrows;
    bool m_NrowsIsSet;
    double m_Ncols;
    bool m_NcolsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Shape_output_H_ */