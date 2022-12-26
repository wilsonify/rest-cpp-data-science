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



#include "CppRestOpenAPIClient/model/Split_data_output.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Split_data_output::Split_data_output()
{
    m_TrainIsSet = false;
    m_TestIsSet = false;
}

Split_data_output::~Split_data_output()
{
}

void Split_data_output::validate()
{
    // TODO: implement validation
}

web::json::value Split_data_output::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TrainIsSet)
    {
        val[utility::conversions::to_string_t(U("train"))] = ModelBase::toJson(m_Train);
    }
    if(m_TestIsSet)
    {
        val[utility::conversions::to_string_t(U("test"))] = ModelBase::toJson(m_Test);
    }

    return val;
}

bool Split_data_output::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("train"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("train")));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<double>> refVal_setTrain;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTrain);
            setTrain(refVal_setTrain);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("test"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("test")));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<double>> refVal_setTest;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTest);
            setTest(refVal_setTest);
        }
    }
    return ok;
}

void Split_data_output::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TrainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("train")), m_Train));
    }
    if(m_TestIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("test")), m_Test));
    }
}

bool Split_data_output::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("train"))))
    {
        std::vector<std::vector<double>> refVal_setTrain;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("train"))), refVal_setTrain );
        setTrain(refVal_setTrain);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("test"))))
    {
        std::vector<std::vector<double>> refVal_setTest;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("test"))), refVal_setTest );
        setTest(refVal_setTest);
    }
    return ok;
}

std::vector<std::vector<double>>& Split_data_output::getTrain()
{
    return m_Train;
}

void Split_data_output::setTrain(const std::vector<std::vector<double>>& value)
{
    m_Train = value;
    m_TrainIsSet = true;
}

bool Split_data_output::trainIsSet() const
{
    return m_TrainIsSet;
}

void Split_data_output::unsetTrain()
{
    m_TrainIsSet = false;
}
std::vector<std::vector<double>>& Split_data_output::getTest()
{
    return m_Test;
}

void Split_data_output::setTest(const std::vector<std::vector<double>>& value)
{
    m_Test = value;
    m_TestIsSet = true;
}

bool Split_data_output::testIsSet() const
{
    return m_TestIsSet;
}

void Split_data_output::unsetTest()
{
    m_TestIsSet = false;
}
}
}
}
}


