#include "vehicle_purchase.h"
#include <cstring>

namespace vehicle_purchase {

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind){
        // TODO: Return true if you need a license for that kind of vehicle.
        if(kind == "car" || kind == "truck"){
            return true;
        } else{return false;}
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        // TODO: Return the final decision in a sentence.
        const char* formatted = option1.c_str();
        const char* second = option2.c_str();
        int equal = strcmp(formatted, second);
        std::string res;
        if(equal > 0){
            res = option2;
        } else {
            res = option1;
        }
        return res + " is clearly the better choice.";
    }

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {
        // TODO: Return the age-corrected resell price.
        int res = 0;
        if(age >= 10){
            res = original_price * 0.5;
        } else if(age >= 3){
            res = original_price * 0.7;
        } else {
            res = original_price * 0.8;
        }
        return res;
    }
    
}  // namespace vehicle_purchase