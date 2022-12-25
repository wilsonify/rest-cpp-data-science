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

#include "EchoApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {



EchoApiImpl::EchoApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : EchoApi(rtr)
{
}

void EchoApiImpl::echo(const std::string &body, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}
