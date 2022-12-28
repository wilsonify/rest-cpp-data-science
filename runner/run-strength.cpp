#include "dspack.h"
#include "nlohmann/json.hpp"

nlohmann::json run_strength_scalar(nlohmann::json input_json)
{
    nlohmann::json output_json;
    nlohmann::json json_to_dump;
    std::string string_to_send;

    int32_t actual = input_json["actual"];
    int32_t expected = input_json["expected"];
    double result = strength(double(actual), double(expected));
    result = round(result, 2);

    output_json["actual"] = actual;
    output_json["expected"] = expected;
    output_json["result"] = result;

    return output_json;
}

nlohmann::json run_strength_vector(nlohmann::json input_json)
{
    std::vector<double> actual;
    std::vector<double> expected;
    std::vector<double> result;
    nlohmann::json output_json;
    actual = input_json["actual"].get<std::vector<double>>();
    expected = input_json["expected"].get<std::vector<double>>();
    result = strength_vector(actual, expected);
    result = round_vector(result, 2);
    output_json["actual"] = actual;
    output_json["expected"] = expected;
    output_json["result"] = result;
    return output_json;
}

nlohmann::json run_strength(nlohmann::json input_json)
{
    nlohmann::json output_json;
    if (input_json["expected"].is_array())
    {
        assert(input_json["actual"].is_array());
        output_json = run_strength_vector(input_json);
    }
    else
    {
        output_json = run_strength_scalar(input_json);
    }
    return output_json;
}
