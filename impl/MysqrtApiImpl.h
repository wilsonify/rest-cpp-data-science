/**
* Minimal Pistache
* This is a sample server
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* MysqrtApiImpl.h
*
* 
*/

#ifndef MYSQRT_API_IMPL_H_
#define MYSQRT_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <MysqrtApi.h>


#include "Sqrt_input.h"
#include "Sqrt_output.h"

namespace org::openapitools::server::api
{

class MysqrtApiImpl : public org::openapitools::server::api::MysqrtApi {
public:
    explicit MysqrtApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~MysqrtApiImpl() override = default;

    void sqrt(const org::openapitools::server::model::Sqrt_input &sqrtInput, Pistache::Http::ResponseWriter &response) final;

};

} // namespace org::openapitools::server::api



#endif
