#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<std::string> h = {"1", "11", "10", "2", "20"};
    std::sort(h.begin(), h.end());

    for (auto it : h)
        std::cout << it << std::endl;
        
    return 0;
}
