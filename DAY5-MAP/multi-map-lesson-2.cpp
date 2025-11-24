#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Multimap declaration
    multimap<int, int> mm1;
    multimap<int, pair<int, int>> mm2;
    multimap<pair<int, int>, int> mm3;
    multimap<char, string> mm4;

    // Inserting elements
    mm1.insert({1, 3});
    mm1.insert(make_pair(7, 5));
    mm1.emplace(4, 8);
    mm1.emplace(4, 9);  // Multimap allows multiple keys

    // Iterating over multimap elements
    for(auto& kv : mm1) {
        cout << kv.first << " " << kv.second << endl;
    }

    // Finding all values for a particular key
    cout << "All values for key 4:" << endl;
    auto range = mm1.equal_range(4);
    for(auto it = range.first; it != range.second; ++it) {
        cout << it->second << endl;  // Should print both 8 and 9
    }

    // Finding a single element
    auto iter = mm1.find(7);
    if (iter != mm1.end()) {
        cout << "Value for key 7: " << iter->second << endl;  // Should print 5
    }

    // Trying to find a key that doesn't exist
    auto iter_1 = mm1.find(10);
    if (iter_1 == mm1.end()) {
        cout << "Key 10 not found." << endl;
    }

    // Using multimap with different data types
    mm4.insert({'a', "apple"});
    mm4.insert({'b', "banana"});
    mm4.emplace('a', "avocado");  // Duplicates allowed for key

    for(auto& kv : mm4) {
        cout << kv.first << " " << kv.second << endl;
    }

    return 0;
}