#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result;

        return result;
    }

};


int pow(int base, int index) {
    int result = 1;
    
    for (int i = 0; i < index; i++) {
        result *= base;
    }

    return result;
}


int main (int argc, char *argv[]) {
    Solution sol;
    int target;

    std::cout << "enter a target" << std::endl;
    std::cin >> target;

    if (target > pow(10, 9) || target < pow(10, 9) * -1) {
        std::cout << "target out of range" << std::endl;
        return 1;
    }

    return 0;
}
