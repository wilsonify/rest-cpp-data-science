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


#include "Interquartile_range_input.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Interquartile_range_input::Interquartile_range_input()
{
    m_xIsSet = false;
    
}

void Interquartile_range_input::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Interquartile_range_input::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Interquartile_range_input::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Interquartile_range_input" : pathPrefix;

         
    if (XIsSet())
    {
        const std::vector<double>& value = m_x;
        const std::string currentValuePath = _pathPrefix + ".X";
                
        
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

bool Interquartile_range_input::operator==(const Interquartile_range_input& rhs) const
{
    return
    
    
    
    ((!XIsSet() && !rhs.XIsSet()) || (XIsSet() && rhs.XIsSet() && getX() == rhs.getX()))
    
    ;
}

bool Interquartile_range_input::operator!=(const Interquartile_range_input& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Interquartile_range_input& o)
{
    j = nlohmann::json();
    if(o.XIsSet() || !o.m_x.empty())
        j["x"] = o.m_x;
    
}

void from_json(const nlohmann::json& j, Interquartile_range_input& o)
{
    if(j.find("x") != j.end())
    {
        j.at("x").get_to(o.m_x);
        o.m_xIsSet = true;
    } 
    
}

std::vector<double> Interquartile_range_input::getX() const
{
    return m_x;
}
void Interquartile_range_input::setX(std::vector<double> const value)
{
    m_x = value;
    m_xIsSet = true;
}
bool Interquartile_range_input::XIsSet() const
{
    return m_xIsSet;
}
void Interquartile_range_input::unsetx()
{
    m_xIsSet = false;
}


} // namespace org::openapitools::server::model

