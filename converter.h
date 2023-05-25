#ifndef _CONVERTER_H
#define _CONVERTER_H

#include <string>
#include <vector>

class Value {
    private:
        double value;
        std::string unit;
        double location; // to go up and down in units
    public:
        Value(double value, std::string unit);
        double getValue();
        std::string getUnit();
};



#endif