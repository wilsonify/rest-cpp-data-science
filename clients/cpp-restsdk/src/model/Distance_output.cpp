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



#include "CppRestOpenAPIClient/model/Distance_output.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Distance_output::Distance_output()
{
    m_x = 0.0;
    m_xIsSet = false;
    m_Result = 0.0;
    m_ResultIsSet = false;
}

Distance_output::~Distance_output()
{
}

void Distance_output::validate()
{
    // TODO: implement validation
}

web::json::value Distance_output::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_xIsSet)
    {
        val[utility::conversions::to_string_t(U("x"))] = ModelBase::toJson(m_x);
    }
    if(m_ResultIsSet)
    {
        val[utility::conversions::to_string_t(U("result"))] = ModelBase::toJson(m_Result);
    }

    return val;
}

bool Distance_output::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("x"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("x")));
        if(!fieldValue.is_null())
        {
            double refVal_setX;
            ok &= ModelBase::fromJson(fieldValue, refVal_setX);
            setX(refVal_setX);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("result"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("result")));
        if(!fieldValue.is_null())
        {
            double refVal_setResult;
            ok &= ModelBase::fromJson(fieldValue, refVal_setResult);
            setResult(refVal_setResult);
        }
    }
    return ok;
}

void Distance_output::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_xIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("x")), m_x));
    }
    if(m_ResultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("result")), m_Result));
    }
}

bool Distance_output::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("x"))))
    {
        double refVal_setX;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("x"))), refVal_setX );
        setX(refVal_setX);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("result"))))
    {
        double refVal_setResult;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("result"))), refVal_setResult );
        setResult(refVal_setResult);
    }
    return ok;
}

double Distance_output::getX() const
{
    return m_x;
}

void Distance_output::setX(double value)
{
    m_x = value;
    m_xIsSet = true;
}

bool Distance_output::XIsSet() const
{
    return m_xIsSet;
}

void Distance_output::unsetx()
{
    m_xIsSet = false;
}
double Distance_output::getResult() const
{
    return m_Result;
}

void Distance_output::setResult(double value)
{
    m_Result = value;
    m_ResultIsSet = true;
}

bool Distance_output::resultIsSet() const
{
    return m_ResultIsSet;
}

void Distance_output::unsetResult()
{
    m_ResultIsSet = false;
}
}
}
}
}


