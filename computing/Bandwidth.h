#include <iostream>
#include "../Expression.h"

using namespace std;


class Bandwidth : public Expression{
private:
    double v;
public:
    double getResult() override;
    void setParams() override;
};


