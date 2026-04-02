#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//O(nlogn) = O(nlogn) + O(n)
// Sort = IntroSort = Quick + heap + insertion

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                return i;
            }
        }

        return nums.size();
    }
};

int main(){
    Solution sol;

    vector<int> nums;

    int SizeOfArray, value;
    cout << "Please enter the size of array: ";
    cin >> SizeOfArray;

    for (int i = 0; i < SizeOfArray; i++) {
        cout << "Please enter the value at index " << i << " : ";
        cin >> value;
        nums.push_back(value);
    }

    int result = sol.missingNumber(nums);

    cout << "Missing number is: " << result << endl;

    return 0;
}