#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

// O(N)
// optimal approach using hash maps 

class HashTable {
private:
    int size = 10;   // hashFunction can access size now 
    vector<vector<int> > table;
public:
    HashTable() {
        table.resize(size);
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool search(int key) {
    int index = hashFunction(key);

    for (int i = 0; i < table[index].size(); i++) {
        if (table[index][i] == key) {
            return true;
        }
    }
    return false;
}

};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            if (seen.count(nums[i])) {
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};

int main() {
    HashTable ht;

    ht.insert(23);
    ht.insert(33);
    ht.insert(15);

    cout << ht.search(33); // 1 (true)
}