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
 * Recall_input.h
 *
 * 
 */

#ifndef Recall_input_H_
#define Recall_input_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Recall_input
{
public:
    Recall_input();
    virtual ~Recall_input() = default;


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

    bool operator==(const Recall_input& rhs) const;
    bool operator!=(const Recall_input& rhs) const;

    /////////////////////////////////////////////
    /// Recall_input members

    /// <summary>
    /// number of True Positives
    /// </summary>
    double getTp() const;
    void setTp(double const value);
    bool tpIsSet() const;
    void unsetTp();
    /// <summary>
    /// number of False Positives
    /// </summary>
    double getFp() const;
    void setFp(double const value);
    bool fpIsSet() const;
    void unsetFp();
    /// <summary>
    /// number of False Negatives
    /// </summary>
    double getFn() const;
    void setFn(double const value);
    bool fnIsSet() const;
    void unsetFn();
    /// <summary>
    /// number of True Negatives
    /// </summary>
    double getTn() const;
    void setTn(double const value);
    bool tnIsSet() const;
    void unsetTn();

    friend void to_json(nlohmann::json& j, const Recall_input& o);
    friend void from_json(const nlohmann::json& j, Recall_input& o);
protected:
    double m_Tp;
    bool m_TpIsSet;
    double m_Fp;
    bool m_FpIsSet;
    double m_Fn;
    bool m_FnIsSet;
    double m_Tn;
    bool m_TnIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Recall_input_H_ */
