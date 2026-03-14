#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    index.push_back(i);
                    index.push_back(j);
                    return index;
                }
            }
        } 
    }
};


int main() {
    Solution sol;

    vector<int> nums;
    int size, target, number;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter elements: ";
    for(int i = 0; i < size; i++) {
        cout << "Please enter the number: ";
        cin >> number;
        nums.push_back(number);
    }

    cout << "Enter target: ";
    cin >> target;

    vector<int> result = sol.twoSum(nums, target);

    if(result.size() == 2) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
