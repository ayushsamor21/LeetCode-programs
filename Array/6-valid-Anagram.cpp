#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//O(nlogn) 
//brute force approach

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) return false;
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.size() != t.size()) return false;
        
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         return s == t;
//     }
// };


int main() {
    string s, t;
    cout << "Please enter the first string: ";
    cin >> s;

    cout << "Please enter the first string: ";
    cin >> t;

    Solution sol;
    bool result = sol.isAnagram(s, t);

    if (result)
        cout << "Strings are anagrams\n";
    else
        cout << "Strings are NOT anagrams\n";

    return 0;
}