#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    int size = 10;
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
    HashTable hash;

    hash.insert(23);
    hash.insert(33);
    hash.insert(13);

    if(hash.search(11)) {
        cout << "duplicate present";
    } else {
        cout << "duplicate is not present";
    }
    return 0;
}