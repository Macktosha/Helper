//
// Created by makun on 22.11.2023.
//

#include "RealBandwith.h"

double RealBandwith::getResult() {
    return (Nt * N * Alfa);
}

void RealBandwith::setParams() {
    cout<< "Enter N"<< endl;
    cin>> N;
}

RealBandwith::RealBandwith(double Nt, double Alfa) {
    this->Nt = Nt;
    this->Alfa = Alfa;
}

