#ifndef VEHICLE_PURCHASE_H
#define VEHICLE_PURCHASE_H

#include <string>

namespace vehicle_purchase {

    /**
     * Determines whether a license is needed to drive a type of vehicle.
     * Only "car" and "truck" require a license.
     * 
     * @param kind The type of vehicle.
     * @return True if a license is required, otherwise false.
     */
    bool needs_license(const std::string& kind);

    /**
     * Recommends a vehicle for selection based on lexicographical order.
     * 
     * @param option1 The first vehicle option.
     * @param option2 The second vehicle option.
     * @return A string recommending the better choice.
     */
    std::string choose_vehicle(const std::string& option1, const std::string& option2);

    /**
     * Calculates how much a vehicle can resell for at a certain age.
     * 
     * @param original_price The original price of the vehicle.
     * @param age The age of the vehicle.
     * @return The age-corrected resell price.
     */
    double calculate_resell_price(double original_price, double age);

}  // namespace vehicle_purchase

#endif  // VEHICLE_PURCHASE_H
