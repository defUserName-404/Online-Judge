#include <iostream>

template <typename T>
class MinMax
{
  public:
    // declaring the variables as public to access them from main.cpp
    T maxElement, minElement;

    // constructor
    MinMax()
    {
        maxElement = -1;
        minElement = -1;
    }

    void initializeMinMax(T numbers[], int size)
    {
        maxElement = INT64_MIN; // to handle overflow
        minElement = INT64_MAX;

        for (int i = 0; i < size; i++)
        {
            if (numbers[i] < minElement)
                minElement = numbers[i];

            if (numbers[i] > maxElement)
                maxElement = numbers[i];
        }
    }
};