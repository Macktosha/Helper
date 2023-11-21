
#include "TrafficLightDelay.h"

double TrafficLightDelay::getResult() {
    return (T - Tz)/2;
}

void TrafficLightDelay::setParams() {
    cout<<" Enter T and Tz" << endl;
    cin >> T >> Tz;
}
