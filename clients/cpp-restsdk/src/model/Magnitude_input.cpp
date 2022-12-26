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



#include "CppRestOpenAPIClient/model/Magnitude_input.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Magnitude_input::Magnitude_input()
{
    m_vIsSet = false;
}

Magnitude_input::~Magnitude_input()
{
}

void Magnitude_input::validate()
{
    // TODO: implement validation
}

web::json::value Magnitude_input::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_vIsSet)
    {
        val[utility::conversions::to_string_t(U("v"))] = ModelBase::toJson(m_v);
    }

    return val;
}

bool Magnitude_input::fromJson(const web::json::value& val)
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
    return ok;
}

void Magnitude_input::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool Magnitude_input::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

std::vector<double>& Magnitude_input::getV()
{
    return m_v;
}

void Magnitude_input::setV(std::vector<double> value)
{
    m_v = value;
    m_vIsSet = true;
}

bool Magnitude_input::VIsSet() const
{
    return m_vIsSet;
}

void Magnitude_input::unsetv()
{
    m_vIsSet = false;
}
}
}
}
}

