#include <vector>
#include <iostream>

class Solution {
   public:
    int removeElement(std::vector<int> &nums, int val) {
        for (auto it = nums.begin(); it != nums.end(); it++) {
            if (*it == val)
                nums.erase(it);
        }

        return nums.size();
    }
};

int main() {
    std::vector<int> nums = {2, 3, 4, 3, 5, 2};

    Solution *s = new Solution();

    int size = s->removeElement(nums, 3);

    std::cout << "New size = " << nums.size() << std::endl;
    std::cout << size << std::endl;

    for (auto it : nums)
        std::cout << it << ' ';

    return 0;
}