#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector <int> nums;

    int SizeOfArray, value;
    cout << "Please enter the size of array: ";
    cin >> SizeOfArray;

    for (int i = 0; i < SizeOfArray; i++) {
        cout << "Please enter the value at index" << i << ": ";
        cin >> value;
        nums.push_back(value);
    }

    if (sol.containsDuplicate(nums)) {
        cout << "Duplicates found in the Array";
    } else {
        cout << "No duplicates in the Array";
    }

    return 0;
}