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
 * Get_row_input.h
 *
 * 
 */

#ifndef Get_row_input_H_
#define Get_row_input_H_


#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Get_row_input
{
public:
    Get_row_input();
    virtual ~Get_row_input() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const Get_row_input& rhs) const;
    bool operator!=(const Get_row_input& rhs) const;

    /////////////////////////////////////////////
    /// Get_row_input members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::vector<double>> getMat() const;
    void setMat(std::vector<std::vector<double>> const& value);
    bool matIsSet() const;
    void unsetMat();
    /// <summary>
    /// 
    /// </summary>
    double getRow() const;
    void setRow(double const value);
    bool rowIsSet() const;
    void unsetRow();

    friend void to_json(nlohmann::json& j, const Get_row_input& o);
    friend void from_json(const nlohmann::json& j, Get_row_input& o);
protected:
    std::vector<std::vector<double>> m_Mat;
    bool m_MatIsSet;
    double m_Row;
    bool m_RowIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Get_row_input_H_ */
