#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to insert element into the set
    void insert(set<int> &s, int x) {
        s.insert(x); 
    }

    // Function to print the contents of the set
    void print_contents(set<int> &s) {
        for (int element : s) {
            cout << element << " ";
        }
        cout << endl;  // Add a new line after printing the set contents
    }

    // Function to erase an element x from the set
    void erase(set<int> &s, int x) {
        s.erase(x);
    }

    // Function to find if an element x is present in the set
    // Returns 1 if the element is found, otherwise -1
    int find(set<int> &s, int x) {
        return (s.find(x) != s.end()) ? 1 : -1;
    }

    // Function to return the size of the set
    int size(set<int> &s) {
        return s.size();
    }
};

// Driver code to demonstrate the solution
int main() {
    Solution sol;
    set<int> s;
    
    int q = 6;  // Example query count
    vector<string> queries = { "a 1", "a 3", "b", "c 2", "a 2", "b" };
    
    for (const string& query : queries) {
        char type = query[0];
        if (type == 'a') {
            int x = stoi(query.substr(2));  // Extract the number after 'a '
            sol.insert(s, x);
        } else if (type == 'b') {
            sol.print_contents(s);
        } else if (type == 'c') {
            int x = stoi(query.substr(2));  // Extract the number after 'c '
            cout << sol.find(s, x) << endl;
        }
    }

    return 0;
}
