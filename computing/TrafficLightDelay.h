#include "../Expression.h"
#include <iostream>
using namespace std;

class TrafficLightDelay : public Expression{
private:
    double T, Tz = 0;
public:
    double getResult() override;
    void setParams() override;
};

