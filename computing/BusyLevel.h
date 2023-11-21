#include <iostream>
#include "../Expression.h"

using namespace std;


class BusyLevel : public Expression {
private:
    double Ns, Nr;
public:
    BusyLevel(double Ns, double Nr);
    double getResult() override;
    void setParams() override;

};

