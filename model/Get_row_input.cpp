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


#include "Get_row_input.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Get_row_input::Get_row_input()
{
    m_MatIsSet = false;
    m_Row = 0.0;
    m_RowIsSet = false;
    
}

void Get_row_input::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Get_row_input::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Get_row_input::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Get_row_input" : pathPrefix;

         
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

bool Get_row_input::operator==(const Get_row_input& rhs) const
{
    return
    
    
    
    ((!matIsSet() && !rhs.matIsSet()) || (matIsSet() && rhs.matIsSet() && getMat() == rhs.getMat())) &&
    
    
    ((!rowIsSet() && !rhs.rowIsSet()) || (rowIsSet() && rhs.rowIsSet() && getRow() == rhs.getRow()))
    
    ;
}

bool Get_row_input::operator!=(const Get_row_input& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Get_row_input& o)
{
    j = nlohmann::json();
    if(o.matIsSet() || !o.m_Mat.empty())
        j["mat"] = o.m_Mat;
    if(o.rowIsSet())
        j["row"] = o.m_Row;
    
}

void from_json(const nlohmann::json& j, Get_row_input& o)
{
    if(j.find("mat") != j.end())
    {
        j.at("mat").get_to(o.m_Mat);
        o.m_MatIsSet = true;
    } 
    if(j.find("row") != j.end())
    {
        j.at("row").get_to(o.m_Row);
        o.m_RowIsSet = true;
    } 
    
}

std::vector<std::vector<double>> Get_row_input::getMat() const
{
    return m_Mat;
}
void Get_row_input::setMat(std::vector<std::vector<double>> const& value)
{
    m_Mat = value;
    m_MatIsSet = true;
}
bool Get_row_input::matIsSet() const
{
    return m_MatIsSet;
}
void Get_row_input::unsetMat()
{
    m_MatIsSet = false;
}
double Get_row_input::getRow() const
{
    return m_Row;
}
void Get_row_input::setRow(double const value)
{
    m_Row = value;
    m_RowIsSet = true;
}
bool Get_row_input::rowIsSet() const
{
    return m_RowIsSet;
}
void Get_row_input::unsetRow()
{
    m_RowIsSet = false;
}


} // namespace org::openapitools::server::model

