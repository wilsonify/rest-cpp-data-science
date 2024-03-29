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


#include "Get_column_input.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Get_column_input::Get_column_input()
{
    m_MatIsSet = false;
    m_Col = 0.0;
    m_ColIsSet = false;
    
}

void Get_column_input::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Get_column_input::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Get_column_input::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Get_column_input" : pathPrefix;

         
    if (matIsSet())
    {
        const std::vector<std::vector<double>>& value = m_Mat;
        const std::string currentValuePath = _pathPrefix + ".mat";
                
        
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
        
    return success;
}

bool Get_column_input::operator==(const Get_column_input& rhs) const
{
    return
    
    
    
    ((!matIsSet() && !rhs.matIsSet()) || (matIsSet() && rhs.matIsSet() && getMat() == rhs.getMat())) &&
    
    
    ((!colIsSet() && !rhs.colIsSet()) || (colIsSet() && rhs.colIsSet() && getCol() == rhs.getCol()))
    
    ;
}

bool Get_column_input::operator!=(const Get_column_input& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Get_column_input& o)
{
    j = nlohmann::json();
    if(o.matIsSet() || !o.m_Mat.empty())
        j["mat"] = o.m_Mat;
    if(o.colIsSet())
        j["col"] = o.m_Col;
    
}

void from_json(const nlohmann::json& j, Get_column_input& o)
{
    if(j.find("mat") != j.end())
    {
        j.at("mat").get_to(o.m_Mat);
        o.m_MatIsSet = true;
    } 
    if(j.find("col") != j.end())
    {
        j.at("col").get_to(o.m_Col);
        o.m_ColIsSet = true;
    } 
    
}

std::vector<std::vector<double>> Get_column_input::getMat() const
{
    return m_Mat;
}
void Get_column_input::setMat(std::vector<std::vector<double>> const& value)
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
void Get_column_input::setCol(double const value)
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


} // namespace org::openapitools::server::model

