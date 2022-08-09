#include <iostream>
#include <vector>


int main() {
    int length = 1000000000;
    std::vector<std::uint64_t> nums;

    for (int i = 0; i < length; i++) {
        if (nums.size() < 2) {
            nums.push_back(1);
        } else {
            nums.push_back(nums[i - 2] + nums[i - 1]);
        }

        std::cout << nums[i] << "\n";
    }
}
