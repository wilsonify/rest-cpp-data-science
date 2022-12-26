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



#include "CppRestOpenAPIClient/model/Bucketize_input.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Bucketize_input::Bucketize_input()
{
    m_Point = 0.0;
    m_PointIsSet = false;
    m_Bucket_size = 0.0;
    m_Bucket_sizeIsSet = false;
}

Bucketize_input::~Bucketize_input()
{
}

void Bucketize_input::validate()
{
    // TODO: implement validation
}

web::json::value Bucketize_input::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PointIsSet)
    {
        val[utility::conversions::to_string_t(U("point"))] = ModelBase::toJson(m_Point);
    }
    if(m_Bucket_sizeIsSet)
    {
        val[utility::conversions::to_string_t(U("bucket_size"))] = ModelBase::toJson(m_Bucket_size);
    }

    return val;
}

bool Bucketize_input::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("point"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("point")));
        if(!fieldValue.is_null())
        {
            double refVal_setPoint;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPoint);
            setPoint(refVal_setPoint);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bucket_size"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bucket_size")));
        if(!fieldValue.is_null())
        {
            double refVal_setBucketSize;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBucketSize);
            setBucketSize(refVal_setBucketSize);
        }
    }
    return ok;
}

void Bucketize_input::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PointIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("point")), m_Point));
    }
    if(m_Bucket_sizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bucket_size")), m_Bucket_size));
    }
}

bool Bucketize_input::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("point"))))
    {
        double refVal_setPoint;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("point"))), refVal_setPoint );
        setPoint(refVal_setPoint);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bucket_size"))))
    {
        double refVal_setBucketSize;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bucket_size"))), refVal_setBucketSize );
        setBucketSize(refVal_setBucketSize);
    }
    return ok;
}

double Bucketize_input::getPoint() const
{
    return m_Point;
}

void Bucketize_input::setPoint(double value)
{
    m_Point = value;
    m_PointIsSet = true;
}

bool Bucketize_input::pointIsSet() const
{
    return m_PointIsSet;
}

void Bucketize_input::unsetPoint()
{
    m_PointIsSet = false;
}
double Bucketize_input::getBucketSize() const
{
    return m_Bucket_size;
}

void Bucketize_input::setBucketSize(double value)
{
    m_Bucket_size = value;
    m_Bucket_sizeIsSet = true;
}

bool Bucketize_input::bucketSizeIsSet() const
{
    return m_Bucket_sizeIsSet;
}

void Bucketize_input::unsetBucket_size()
{
    m_Bucket_sizeIsSet = false;
}
}
}
}
}

