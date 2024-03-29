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



#include "CppRestOpenAPIClient/model/Maximize_batch_output.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Maximize_batch_output::Maximize_batch_output()
{
    m_x = 0.0;
    m_xIsSet = false;
    m_Result = 0.0;
    m_ResultIsSet = false;
}

Maximize_batch_output::~Maximize_batch_output()
{
}

void Maximize_batch_output::validate()
{
    // TODO: implement validation
}

web::json::value Maximize_batch_output::toJson() const
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

bool Maximize_batch_output::fromJson(const web::json::value& val)
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

void Maximize_batch_output::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool Maximize_batch_output::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

double Maximize_batch_output::getX() const
{
    return m_x;
}

void Maximize_batch_output::setX(double value)
{
    m_x = value;
    m_xIsSet = true;
}

bool Maximize_batch_output::XIsSet() const
{
    return m_xIsSet;
}

void Maximize_batch_output::unsetx()
{
    m_xIsSet = false;
}
double Maximize_batch_output::getResult() const
{
    return m_Result;
}

void Maximize_batch_output::setResult(double value)
{
    m_Result = value;
    m_ResultIsSet = true;
}

bool Maximize_batch_output::resultIsSet() const
{
    return m_ResultIsSet;
}

void Maximize_batch_output::unsetResult()
{
    m_ResultIsSet = false;
}
}
}
}
}


