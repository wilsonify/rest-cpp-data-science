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



#include "CppRestOpenAPIClient/model/Get_column_input.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Get_column_input::Get_column_input()
{
    m_MatIsSet = false;
    m_Col = 0.0;
    m_ColIsSet = false;
}

Get_column_input::~Get_column_input()
{
}

void Get_column_input::validate()
{
    // TODO: implement validation
}

web::json::value Get_column_input::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MatIsSet)
    {
        val[utility::conversions::to_string_t(U("mat"))] = ModelBase::toJson(m_Mat);
    }
    if(m_ColIsSet)
    {
        val[utility::conversions::to_string_t(U("col"))] = ModelBase::toJson(m_Col);
    }

    return val;
}

bool Get_column_input::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("mat"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mat")));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<double>> refVal_setMat;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMat);
            setMat(refVal_setMat);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("col"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("col")));
        if(!fieldValue.is_null())
        {
            double refVal_setCol;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCol);
            setCol(refVal_setCol);
        }
    }
    return ok;
}

void Get_column_input::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mat")), m_Mat));
    }
    if(m_ColIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("col")), m_Col));
    }
}

bool Get_column_input::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("mat"))))
    {
        std::vector<std::vector<double>> refVal_setMat;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mat"))), refVal_setMat );
        setMat(refVal_setMat);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("col"))))
    {
        double refVal_setCol;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("col"))), refVal_setCol );
        setCol(refVal_setCol);
    }
    return ok;
}

std::vector<std::vector<double>>& Get_column_input::getMat()
{
    return m_Mat;
}

void Get_column_input::setMat(const std::vector<std::vector<double>>& value)
{
    m_Mat = value;
    m_MatIsSet = true;
}

bool Get_column_input::matIsSet() const
{
    return m_MatIsSet;
}

void Get_column_input::unsetMat()
{
    m_MatIsSet = false;
}
double Get_column_input::getCol() const
{
    return m_Col;
}

void Get_column_input::setCol(double value)
{
    m_Col = value;
    m_ColIsSet = true;
}

bool Get_column_input::colIsSet() const
{
    return m_ColIsSet;
}

void Get_column_input::unsetCol()
{
    m_ColIsSet = false;
}
}
}
}
}


