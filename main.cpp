#include <iostream>
#include "computing/TrafficLightDelay.h"
#include "computing/TrafficIntesity.h"
#include "computing/TrafficLightRegulatoryAndTheoreticalBandwith.h"
#include "computing/RealBandwith.h"
#include "computing/Bandwidth.h"
#include "computing/BusyLevel.h"


int main() {
    TrafficLightDelay dt;
    dt.setParams();

    auto dt_res = dt.getResult();
    cout << " Traffic light delay = " << dt_res << endl;

    TrafficLightRegulatoryAndTheoreticalBandwith alfa(dt_res);
    alfa.setParams();
    auto alfa_res = alfa.getResult();
    cout<< "Alfa = " << alfa_res <<endl;

    TrafficIntesity ns;
    ns.setParams();

    auto ns_res = ns.getResult();
    cout<< "Intensity = " << ns_res <<endl;

    Bandwidth nt;
    nt.setParams();

    auto nt_res = nt.getResult();
    cout<< "Bandwidth = " << nt_res <<endl;

    RealBandwith nr(nt_res,alfa_res);
    nr.setParams();

    auto nr_res = nr.getResult();
    cout<< "Real bandwidth = " << nr_res <<endl;

    BusyLevel z(ns_res,nr_res);

    cout<< " Busy level = " << z.getResult() << endl;




}
