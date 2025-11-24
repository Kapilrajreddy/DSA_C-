#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Unordered map declaration
    unordered_map<int, int> um1;
    unordered_map<int, pair<int, int>> um2;
    unordered_map<char, string> um3;

    // Inserting elements
    um1[1] = 3;
    um1.insert(make_pair(7, 5));
    um1.emplace(4, 8);
    um1[4] = 9;  // This will overwrite the previous value at key 4

    // Iterating over unordered map elements
    for(auto& kv : um1) {
        cout << kv.first << " " << kv.second << endl;
    }

    // Accessing a single element
    cout << "Value at key 4: " << um1[4] << endl;  // Should print 9

    // Finding a single element
    auto iter = um1.find(7);
    if (iter != um1.end()) {
        cout << "Value for key 7: " << iter->second << endl;  // Should print 5
    } else {
        cout << "Key 7 not found." << endl;
    }

    // Trying to find a key that doesn't exist
    auto iter_1 = um1.find(10);
    if (iter_1 == um1.end()) {
        cout << "Key 10 not found." << endl;
    }

    // Using unordered map with different data types
    um3['a'] = "apple";
    um3.insert({'b', "banana"});
    um3['a'] = "avocado";  // This will overwrite "apple" with "avocado"

    for(auto& kv : um3) {
        cout << kv.first << " " << kv.second << endl;
    }

    return 0;
}