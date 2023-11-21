//
// Created by makun on 22.11.2023.
//

#include "BusyLevel.h"

double BusyLevel::getResult() {
    return Ns/Nr;
}

BusyLevel::BusyLevel(double Ns, double Nr) {
    this-> Ns = Ns;
    this-> Nr = Nr;
}

void BusyLevel::setParams() {

}
