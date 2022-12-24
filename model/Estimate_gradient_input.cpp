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


#include "Estimate_gradient_input.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Estimate_gradient_input::Estimate_gradient_input()
{
    m_vIsSet = false;
    m_h = 0.0;
    m_hIsSet = false;
    
}

void Estimate_gradient_input::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Estimate_gradient_input::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Estimate_gradient_input::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Estimate_gradient_input" : pathPrefix;

         
    if (VIsSet())
    {
        const std::vector<double>& value = m_v;
        const std::string currentValuePath = _pathPrefix + ".V";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const double& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
        
    return success;
}

bool Estimate_gradient_input::operator==(const Estimate_gradient_input& rhs) const
{
    return
    
    
    
    ((!VIsSet() && !rhs.VIsSet()) || (VIsSet() && rhs.VIsSet() && getV() == rhs.getV())) &&
    
    
    ((!HIsSet() && !rhs.HIsSet()) || (HIsSet() && rhs.HIsSet() && getH() == rhs.getH()))
    
    ;
}

bool Estimate_gradient_input::operator!=(const Estimate_gradient_input& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Estimate_gradient_input& o)
{
    j = nlohmann::json();
    if(o.VIsSet() || !o.m_v.empty())
        j["v"] = o.m_v;
    if(o.HIsSet())
        j["h"] = o.m_h;
    
}

void from_json(const nlohmann::json& j, Estimate_gradient_input& o)
{
    if(j.find("v") != j.end())
    {
        j.at("v").get_to(o.m_v);
        o.m_vIsSet = true;
    } 
    if(j.find("h") != j.end())
    {
        j.at("h").get_to(o.m_h);
        o.m_hIsSet = true;
    } 
    
}

std::vector<double> Estimate_gradient_input::getV() const
{
    return m_v;
}
void Estimate_gradient_input::setV(std::vector<double> const value)
{
    m_v = value;
    m_vIsSet = true;
}
bool Estimate_gradient_input::VIsSet() const
{
    return m_vIsSet;
}
void Estimate_gradient_input::unsetv()
{
    m_vIsSet = false;
}
double Estimate_gradient_input::getH() const
{
    return m_h;
}
void Estimate_gradient_input::setH(double const value)
{
    m_h = value;
    m_hIsSet = true;
}
bool Estimate_gradient_input::HIsSet() const
{
    return m_hIsSet;
}
void Estimate_gradient_input::unseth()
{
    m_hIsSet = false;
}


} // namespace org::openapitools::server::model

