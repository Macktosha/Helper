
#include <iostream>
#include "../Expression.h"

using namespace std;


class RealBandwith : Expression{
private:
    double N;
    double Nt;
    double Alfa;
public:
    RealBandwith(double Nt, double Alfa);
    double getResult() override;
    void setParams() override;
};

