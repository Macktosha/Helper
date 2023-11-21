#include <iostream>
#include "../Expression.h"

using namespace std;

class TrafficIntesity : public Expression{
private:
    double N1, N2, N3, N4, N5, N6;
public:
    double getResult() override;
    void setParams() override;
};
