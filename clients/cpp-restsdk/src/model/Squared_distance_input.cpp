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



#include "CppRestOpenAPIClient/model/Squared_distance_input.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Squared_distance_input::Squared_distance_input()
{
    m_vIsSet = false;
    m_wIsSet = false;
}

Squared_distance_input::~Squared_distance_input()
{
}

void Squared_distance_input::validate()
{
    // TODO: implement validation
}

web::json::value Squared_distance_input::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_vIsSet)
    {
        val[utility::conversions::to_string_t(U("v"))] = ModelBase::toJson(m_v);
    }
    if(m_wIsSet)
    {
        val[utility::conversions::to_string_t(U("w"))] = ModelBase::toJson(m_w);
    }

    return val;
}

bool Squared_distance_input::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("v"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("v")));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal_setV;
            ok &= ModelBase::fromJson(fieldValue, refVal_setV);
            setV(refVal_setV);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("w"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("w")));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal_setW;
            ok &= ModelBase::fromJson(fieldValue, refVal_setW);
            setW(refVal_setW);
        }
    }
    return ok;
}

void Squared_distance_input::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_vIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("v")), m_v));
    }
    if(m_wIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("w")), m_w));
    }
}

bool Squared_distance_input::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("v"))))
    {
        std::vector<double> refVal_setV;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("v"))), refVal_setV );
        setV(refVal_setV);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("w"))))
    {
        std::vector<double> refVal_setW;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("w"))), refVal_setW );
        setW(refVal_setW);
    }
    return ok;
}

std::vector<double>& Squared_distance_input::getV()
{
    return m_v;
}

void Squared_distance_input::setV(std::vector<double> value)
{
    m_v = value;
    m_vIsSet = true;
}

bool Squared_distance_input::VIsSet() const
{
    return m_vIsSet;
}

void Squared_distance_input::unsetv()
{
    m_vIsSet = false;
}
std::vector<double>& Squared_distance_input::getW()
{
    return m_w;
}

void Squared_distance_input::setW(std::vector<double> value)
{
    m_w = value;
    m_wIsSet = true;
}

bool Squared_distance_input::WIsSet() const
{
    return m_wIsSet;
}

void Squared_distance_input::unsetw()
{
    m_wIsSet = false;
}
}
}
}
}

