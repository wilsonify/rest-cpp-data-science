#pragma once
#include "dspack.h"
#include "nlohmann/json.hpp"

nlohmann::json run_my_sqrt(nlohmann::json input_json)
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
