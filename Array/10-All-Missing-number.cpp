#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:

    vector<int> findDisappearedNumbers(vector<int>& nums) {

        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            seen.insert(nums[i]);
        }

        vector<int> missing;

        for (int i = 1; i <= nums.size(); i++) {

            // If number is missing
            if (seen.find(i) == seen.end()) {
                missing.push_back(i);
            }
        }

        return missing;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> result = obj.findDisappearedNumbers(nums);

    cout << "Missing numbers: ";

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}