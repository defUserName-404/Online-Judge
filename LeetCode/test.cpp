#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_multiset<int> mySet{2, 1, 3, 4, 5, 6, 7, 1};

    for (auto it : mySet)
        std::cout << it << " : " << mySet.count(it) << std::endl;

    // for (auto it : nums)
    //     std::cout << it << ' ';

    return 0;
}
