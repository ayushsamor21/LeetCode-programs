#include <iostream>
#include <vector>
using namespace std;

//optimal approach
//O(n)
// Equation n = 1 + 2 + 3 +...+ (n)
// Equation n = 1 + 2 + 3 +...+ (n)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
    
        int expectedSum = n * (n + 1) / 2;

        int actualSum = 0;
        for (int i = 0; i < n; i++) {
            actualSum += nums[i];
        }
        return expectedSum - actualSum;
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