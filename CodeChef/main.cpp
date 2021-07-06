#ifndef MINMAX_H
#define MINMAX_H

#include "MinMax.hpp"

int main()
{
    MinMax<double> minMax; // creating a instance of the templated class MinMax for double values

    // test
    double numbers[5] = {29.75, -23.01, -23.001, 29.757, -1.0032};

    // calling the function
    minMax.initializeMinMax(numbers, 5);

    std::cout << "Maximum double Element is " << minMax.maxElement << std::endl;
    std::cout << "Minimum double Element is " << minMax.minElement << std::endl;

    return 0;
}
#endif