#include <iostream>
#include <vector>
#include <list>
using namespace std;

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

int main() {
    HashTable ht;

    ht.insert(23);
    ht.insert(33);
    ht.insert(15);

    cout << ht.search(33); // 1 (true)
}