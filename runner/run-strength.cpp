#include "dspack.h"
#include "nlohmann/json.hpp"

nlohmann::json run_strength(nlohmann::json input_json)
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
