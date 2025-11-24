#include <bits/stdc++.h>
using namespace std;

bool comparator(const pair<int,int>& p1, const pair<int,int>& p2) {
    if (p1.first < p2.first) return true;
    if (p1.first > p2.first) return false;
    return p1.second > p2.second; // second descending
}

class solution {
public:
    void sortPairs(vector<pair<int, int>>& arr) {
        sort(arr.begin(), arr.end(), comparator);
    }

    int popcount(long long x) {
        return __builtin_popcountll(x);
    }
};

int main() {
    solution sol;
    
    vector<pair<int,int>> arr = {
        {3, 5},
        {1, 2},
        {3, 4},
        {2, 10},
        {1, 9}
    };

    sol.sortPairs(arr);  // Sort only (no printing)

    // Print results here ONLY
    for (auto &p : arr) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
