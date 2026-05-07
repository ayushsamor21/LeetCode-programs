#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {

    unordered_set<int> seen;

    for (int i = 0; i < nums.size(); i++) {

        int num = nums[i];

        if (seen.find(num) != seen.end()) {
            return true;
        }

        seen.insert(num);
    }

    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 2};

    if (containsDuplicate(nums)) {
        cout << "Duplicate present";
    } else {
        cout << "No duplicate";
    }
}