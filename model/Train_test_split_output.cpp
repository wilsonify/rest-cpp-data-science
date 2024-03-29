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


#include "Train_test_split_output.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Train_test_split_output::Train_test_split_output()
{
    m_X_trainIsSet = false;
    m_X_testIsSet = false;
    m_Y_trainIsSet = false;
    m_Y_testIsSet = false;
    
}

void Train_test_split_output::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Train_test_split_output::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Train_test_split_output::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Train_test_split_output" : pathPrefix;

         
    if (xTrainIsSet())
    {
        const std::vector<std::vector<double>>& value = m_X_train;
        const std::string currentValuePath = _pathPrefix + ".xTrain";
                
        
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
         
    if (xTestIsSet())
    {
        const std::vector<std::vector<double>>& value = m_X_test;
        const std::string currentValuePath = _pathPrefix + ".xTest";
                
        
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
         
    if (yTrainIsSet())
    {
        const std::vector<double>& value = m_Y_train;
        const std::string currentValuePath = _pathPrefix + ".yTrain";
                
        
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
         
    if (yTestIsSet())
    {
        const std::vector<double>& value = m_Y_test;
        const std::string currentValuePath = _pathPrefix + ".yTest";
                
        
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

bool Train_test_split_output::operator==(const Train_test_split_output& rhs) const
{
    return
    
    
    
    ((!xTrainIsSet() && !rhs.xTrainIsSet()) || (xTrainIsSet() && rhs.xTrainIsSet() && getXTrain() == rhs.getXTrain())) &&
    
    
    ((!xTestIsSet() && !rhs.xTestIsSet()) || (xTestIsSet() && rhs.xTestIsSet() && getXTest() == rhs.getXTest())) &&
    
    
    ((!yTrainIsSet() && !rhs.yTrainIsSet()) || (yTrainIsSet() && rhs.yTrainIsSet() && getYTrain() == rhs.getYTrain())) &&
    
    
    ((!yTestIsSet() && !rhs.yTestIsSet()) || (yTestIsSet() && rhs.yTestIsSet() && getYTest() == rhs.getYTest()))
    
    ;
}

bool Train_test_split_output::operator!=(const Train_test_split_output& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Train_test_split_output& o)
{
    j = nlohmann::json();
    if(o.xTrainIsSet() || !o.m_X_train.empty())
        j["x_train"] = o.m_X_train;
    if(o.xTestIsSet() || !o.m_X_test.empty())
        j["x_test"] = o.m_X_test;
    if(o.yTrainIsSet() || !o.m_Y_train.empty())
        j["y_train"] = o.m_Y_train;
    if(o.yTestIsSet() || !o.m_Y_test.empty())
        j["y_test"] = o.m_Y_test;
    
}

void from_json(const nlohmann::json& j, Train_test_split_output& o)
{
    if(j.find("x_train") != j.end())
    {
        j.at("x_train").get_to(o.m_X_train);
        o.m_X_trainIsSet = true;
    } 
    if(j.find("x_test") != j.end())
    {
        j.at("x_test").get_to(o.m_X_test);
        o.m_X_testIsSet = true;
    } 
    if(j.find("y_train") != j.end())
    {
        j.at("y_train").get_to(o.m_Y_train);
        o.m_Y_trainIsSet = true;
    } 
    if(j.find("y_test") != j.end())
    {
        j.at("y_test").get_to(o.m_Y_test);
        o.m_Y_testIsSet = true;
    } 
    
}

std::vector<std::vector<double>> Train_test_split_output::getXTrain() const
{
    return m_X_train;
}
void Train_test_split_output::setXTrain(std::vector<std::vector<double>> const& value)
{
    m_X_train = value;
    m_X_trainIsSet = true;
}
bool Train_test_split_output::xTrainIsSet() const
{
    return m_X_trainIsSet;
}
void Train_test_split_output::unsetX_train()
{
    m_X_trainIsSet = false;
}
std::vector<std::vector<double>> Train_test_split_output::getXTest() const
{
    return m_X_test;
}
void Train_test_split_output::setXTest(std::vector<std::vector<double>> const& value)
{
    m_X_test = value;
    m_X_testIsSet = true;
}
bool Train_test_split_output::xTestIsSet() const
{
    return m_X_testIsSet;
}
void Train_test_split_output::unsetX_test()
{
    m_X_testIsSet = false;
}
std::vector<double> Train_test_split_output::getYTrain() const
{
    return m_Y_train;
}
void Train_test_split_output::setYTrain(std::vector<double> const value)
{
    m_Y_train = value;
    m_Y_trainIsSet = true;
}
bool Train_test_split_output::yTrainIsSet() const
{
    return m_Y_trainIsSet;
}
void Train_test_split_output::unsetY_train()
{
    m_Y_trainIsSet = false;
}
std::vector<double> Train_test_split_output::getYTest() const
{
    return m_Y_test;
}
void Train_test_split_output::setYTest(std::vector<double> const value)
{
    m_Y_test = value;
    m_Y_testIsSet = true;
}
bool Train_test_split_output::yTestIsSet() const
{
    return m_Y_testIsSet;
}
void Train_test_split_output::unsetY_test()
{
    m_Y_testIsSet = false;
}


} // namespace org::openapitools::server::model

