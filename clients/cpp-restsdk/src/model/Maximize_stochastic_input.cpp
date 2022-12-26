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



#include "CppRestOpenAPIClient/model/Maximize_stochastic_input.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Maximize_stochastic_input::Maximize_stochastic_input()
{
    m_xIsSet = false;
    m_yIsSet = false;
}

Maximize_stochastic_input::~Maximize_stochastic_input()
{
}

void Maximize_stochastic_input::validate()
{
    // TODO: implement validation
}

web::json::value Maximize_stochastic_input::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_xIsSet)
    {
        val[utility::conversions::to_string_t(U("x"))] = ModelBase::toJson(m_x);
    }
    if(m_yIsSet)
    {
        val[utility::conversions::to_string_t(U("y"))] = ModelBase::toJson(m_y);
    }

    return val;
}

bool Maximize_stochastic_input::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("x"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("x")));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<double>> refVal_setX;
            ok &= ModelBase::fromJson(fieldValue, refVal_setX);
            setX(refVal_setX);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("y"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("y")));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal_setY;
            ok &= ModelBase::fromJson(fieldValue, refVal_setY);
            setY(refVal_setY);
        }
    }
    return ok;
}

void Maximize_stochastic_input::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_yIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("y")), m_y));
    }
}

bool Maximize_stochastic_input::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("x"))))
    {
        std::vector<std::vector<double>> refVal_setX;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("x"))), refVal_setX );
        setX(refVal_setX);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("y"))))
    {
        std::vector<double> refVal_setY;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("y"))), refVal_setY );
        setY(refVal_setY);
    }
    return ok;
}

std::vector<std::vector<double>>& Maximize_stochastic_input::getX()
{
    return m_x;
}

void Maximize_stochastic_input::setX(const std::vector<std::vector<double>>& value)
{
    m_x = value;
    m_xIsSet = true;
}

bool Maximize_stochastic_input::XIsSet() const
{
    return m_xIsSet;
}

void Maximize_stochastic_input::unsetx()
{
    m_xIsSet = false;
}
std::vector<double>& Maximize_stochastic_input::getY()
{
    return m_y;
}

void Maximize_stochastic_input::setY(std::vector<double> value)
{
    m_y = value;
    m_yIsSet = true;
}

bool Maximize_stochastic_input::YIsSet() const
{
    return m_yIsSet;
}

void Maximize_stochastic_input::unsety()
{
    m_yIsSet = false;
}
}
}
}
}


