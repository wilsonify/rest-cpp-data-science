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
 * Vector_mean_input.h
 *
 * 
 */

#ifndef Vector_mean_input_H_
#define Vector_mean_input_H_


#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Vector_mean_input
{
public:
    Vector_mean_input();
    virtual ~Vector_mean_input() = default;


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

    bool operator==(const Vector_mean_input& rhs) const;
    bool operator!=(const Vector_mean_input& rhs) const;

    /////////////////////////////////////////////
    /// Vector_mean_input members

    /// <summary>
    /// 
    /// </summary>
    std::vector<double> getV() const;
    void setV(std::vector<double> const value);
    bool VIsSet() const;
    void unsetv();
    /// <summary>
    /// 
    /// </summary>
    std::vector<double> getW() const;
    void setW(std::vector<double> const value);
    bool WIsSet() const;
    void unsetw();

    friend void to_json(nlohmann::json& j, const Vector_mean_input& o);
    friend void from_json(const nlohmann::json& j, Vector_mean_input& o);
protected:
    std::vector<double> m_v;
    bool m_vIsSet;
    std::vector<double> m_w;
    bool m_wIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Vector_mean_input_H_ */
