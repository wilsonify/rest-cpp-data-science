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



#include "CppRestOpenAPIClient/model/Precision_input.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Precision_input::Precision_input()
{
    m_Tp = 0.0;
    m_TpIsSet = false;
    m_Fp = 0.0;
    m_FpIsSet = false;
    m_Fn = 0.0;
    m_FnIsSet = false;
    m_Tn = 0.0;
    m_TnIsSet = false;
}

Precision_input::~Precision_input()
{
}

void Precision_input::validate()
{
    // TODO: implement validation
}

web::json::value Precision_input::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TpIsSet)
    {
        val[utility::conversions::to_string_t(U("tp"))] = ModelBase::toJson(m_Tp);
    }
    if(m_FpIsSet)
    {
        val[utility::conversions::to_string_t(U("fp"))] = ModelBase::toJson(m_Fp);
    }
    if(m_FnIsSet)
    {
        val[utility::conversions::to_string_t(U("fn"))] = ModelBase::toJson(m_Fn);
    }
    if(m_TnIsSet)
    {
        val[utility::conversions::to_string_t(U("tn"))] = ModelBase::toJson(m_Tn);
    }

    return val;
}

bool Precision_input::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("tp"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tp")));
        if(!fieldValue.is_null())
        {
            double refVal_setTp;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTp);
            setTp(refVal_setTp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fp"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fp")));
        if(!fieldValue.is_null())
        {
            double refVal_setFp;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFp);
            setFp(refVal_setFp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fn"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fn")));
        if(!fieldValue.is_null())
        {
            double refVal_setFn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFn);
            setFn(refVal_setFn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tn"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tn")));
        if(!fieldValue.is_null())
        {
            double refVal_setTn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTn);
            setTn(refVal_setTn);
        }
    }
    return ok;
}

void Precision_input::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tp")), m_Tp));
    }
    if(m_FpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fp")), m_Fp));
    }
    if(m_FnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fn")), m_Fn));
    }
    if(m_TnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tn")), m_Tn));
    }
}

bool Precision_input::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("tp"))))
    {
        double refVal_setTp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tp"))), refVal_setTp );
        setTp(refVal_setTp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fp"))))
    {
        double refVal_setFp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fp"))), refVal_setFp );
        setFp(refVal_setFp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fn"))))
    {
        double refVal_setFn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fn"))), refVal_setFn );
        setFn(refVal_setFn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tn"))))
    {
        double refVal_setTn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tn"))), refVal_setTn );
        setTn(refVal_setTn);
    }
    return ok;
}

double Precision_input::getTp() const
{
    return m_Tp;
}

void Precision_input::setTp(double value)
{
    m_Tp = value;
    m_TpIsSet = true;
}

bool Precision_input::tpIsSet() const
{
    return m_TpIsSet;
}

void Precision_input::unsetTp()
{
    m_TpIsSet = false;
}
double Precision_input::getFp() const
{
    return m_Fp;
}

void Precision_input::setFp(double value)
{
    m_Fp = value;
    m_FpIsSet = true;
}

bool Precision_input::fpIsSet() const
{
    return m_FpIsSet;
}

void Precision_input::unsetFp()
{
    m_FpIsSet = false;
}
double Precision_input::getFn() const
{
    return m_Fn;
}

void Precision_input::setFn(double value)
{
    m_Fn = value;
    m_FnIsSet = true;
}

bool Precision_input::fnIsSet() const
{
    return m_FnIsSet;
}

void Precision_input::unsetFn()
{
    m_FnIsSet = false;
}
double Precision_input::getTn() const
{
    return m_Tn;
}

void Precision_input::setTn(double value)
{
    m_Tn = value;
    m_TnIsSet = true;
}

bool Precision_input::tnIsSet() const
{
    return m_TnIsSet;
}

void Precision_input::unsetTn()
{
    m_TnIsSet = false;
}
}
}
}
}


