
#include "Bandwidth.h"

double Bandwidth::getResult() {
    return ((3600 * v) / (v + 7 + 0.17 * v * v));
}

void Bandwidth::setParams() {
    cout<< "Enter V"<< endl;
    cin >> v;
}
