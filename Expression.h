#pragma once
class Expression {
public:
    virtual double getResult() = 0;
    virtual void setParams() = 0;
    virtual ~Expression() = default;
};


