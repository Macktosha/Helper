//
// Created by makun on 21.11.2023.
//

#include "TrafficIntesity.h"

double TrafficIntesity::getResult() {
    return N1 + N2 * 1.7 + N3 * 2 + N4 * 2.3 + N5 * 2.4 + N6 * 0.5;
}

void TrafficIntesity::setParams() {
    cout<<" Enter N1, N2, N3, N4, N5, N6" << endl;
    cin >> N1 >> N2 >> N3 >> N4 >> N5 >> N6;
}
