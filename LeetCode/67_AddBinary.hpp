#include <iostream>

// Unsolved 

// class Solution
// {
//     void append(std::string &a, std::string &b, int a_size, int b_size)
//     {
//         if (a_size > b_size)
//             b = std::string(a_size - b_size, '0') + b;
//         else if (b_size > a_size)
//             a = std::string(b_size - a_size, '0') + a;
//     }

//   public:
//     std::string addBinary(std::string a, std::string b)
//     {
//         std::string sum = "";
//         int carry = 0;

//         int a_size = a.size();
//         int b_size = b.size();

//         append(a, b, a_size, b_size);

//         int m = a.size();

//         for (int i = m - 1; i >= 0; i--)
//         {
//         }

//         return sum;
//     }
// };