#include <vector>
#include "dspack.h"
#include "nlohmann/json.hpp"

nlohmann::json run_my_sqrt_scalar(nlohmann::json input_json)
{
    double x;
    double result;
    nlohmann::json output_json;
    x = input_json["x"];
    result = mysqrt(x);
    result = round(result, 2);
    output_json["x"] = x;
    output_json["result"] = result;
    return output_json;
}

nlohmann::json run_my_sqrt_vector(nlohmann::json input_json)
{
    std::vector<double> x;
    std::vector<double> result;
    nlohmann::json output_json;
    x = input_json["x"].get<std::vector<double>>();
    result = mysqrt_vector(x);
    result = round_vector(result, 2);
    output_json["x"] = x;
    output_json["result"] = result;
    return output_json;
}

nlohmann::json run_my_sqrt(nlohmann::json input_json)
{
    nlohmann::json output_json;
    if (input_json["x"].is_array())
    {
        output_json = run_my_sqrt_vector(input_json);
    }
    else
    {
        output_json = run_my_sqrt_scalar(input_json);
    }
    return output_json;
}
