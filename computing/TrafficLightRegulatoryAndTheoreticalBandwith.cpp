//
// Created by makun on 22.11.2023.
//

#include "TrafficLightRegulatoryAndTheoreticalBandwith.h"

double TrafficLightRegulatoryAndTheoreticalBandwith::getResult() {
    return (L / (L + v * v / 2 + (1 + 1 / 1.5) + v * dt));
}

void TrafficLightRegulatoryAndTheoreticalBandwith::setParams() {
    cout<< "Enter L and v"<< endl;
    cin >> L >> v;
}

TrafficLightRegulatoryAndTheoreticalBandwith::TrafficLightRegulatoryAndTheoreticalBandwith(double dt) {
    this->dt = dt;
}
