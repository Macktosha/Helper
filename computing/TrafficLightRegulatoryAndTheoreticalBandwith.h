#include <iostream>
#include "../Expression.h"

using namespace std;


class TrafficLightRegulatoryAndTheoreticalBandwith : public Expression {
private:
    double L, v, dt;
public:
    TrafficLightRegulatoryAndTheoreticalBandwith(double dt);
    double getResult() override;
    void setParams() override;
};



