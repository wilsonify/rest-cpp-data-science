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


#include "Maximize_stochastic_input.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Maximize_stochastic_input::Maximize_stochastic_input()
{
    m_xIsSet = false;
    m_yIsSet = false;
    
}

void Maximize_stochastic_input::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Maximize_stochastic_input::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Maximize_stochastic_input::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Maximize_stochastic_input" : pathPrefix;

         
    if (XIsSet())
    {
        const std::vector<std::vector<double>>& value = m_x;
        const std::string currentValuePath = _pathPrefix + ".X";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::vector<double>& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const double& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }
 
                i++;
            }
        }

    }
         
    if (YIsSet())
    {
        const std::vector<double>& value = m_y;
        const std::string currentValuePath = _pathPrefix + ".Y";
                
        
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

bool Maximize_stochastic_input::operator==(const Maximize_stochastic_input& rhs) const
{
    return
    
    
    
    ((!XIsSet() && !rhs.XIsSet()) || (XIsSet() && rhs.XIsSet() && getX() == rhs.getX())) &&
    
    
    ((!YIsSet() && !rhs.YIsSet()) || (YIsSet() && rhs.YIsSet() && getY() == rhs.getY()))
    
    ;
}

bool Maximize_stochastic_input::operator!=(const Maximize_stochastic_input& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Maximize_stochastic_input& o)
{
    j = nlohmann::json();
    if(o.XIsSet() || !o.m_x.empty())
        j["x"] = o.m_x;
    if(o.YIsSet() || !o.m_y.empty())
        j["y"] = o.m_y;
    
}

void from_json(const nlohmann::json& j, Maximize_stochastic_input& o)
{
    if(j.find("x") != j.end())
    {
        j.at("x").get_to(o.m_x);
        o.m_xIsSet = true;
    } 
    if(j.find("y") != j.end())
    {
        j.at("y").get_to(o.m_y);
        o.m_yIsSet = true;
    } 
    
}

std::vector<std::vector<double>> Maximize_stochastic_input::getX() const
{
    return m_x;
}
void Maximize_stochastic_input::setX(std::vector<std::vector<double>> const& value)
{
    m_x = value;
    m_xIsSet = true;
}
bool Maximize_stochastic_input::XIsSet() const
{
    return m_xIsSet;
}
void Maximize_stochastic_input::unsetx()
{
    m_xIsSet = false;
}
std::vector<double> Maximize_stochastic_input::getY() const
{
    return m_y;
}
void Maximize_stochastic_input::setY(std::vector<double> const value)
{
    m_y = value;
    m_yIsSet = true;
}
bool Maximize_stochastic_input::YIsSet() const
{
    return m_yIsSet;
}
void Maximize_stochastic_input::unsety()
{
    m_yIsSet = false;
}


} // namespace org::openapitools::server::model

