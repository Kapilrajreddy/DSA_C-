#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if (p1.first < p2.first) return true;
    if (p1.first > p2.first) return false;
    if (p1.second > p2.second) return true;
    return false;
}

int main() {
    // Initializing and sorting an array
    int a[] = {13, 5, 17, 9, 70, 43, 15};
    int n = sizeof(a)/sizeof(a[0]);  // Length of the array

    sort(a, a + n);  // Sorting the entire array in ascending order
    
    cout << "Sorting array a:" << endl;
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    cout << endl;
    
    cout << "Sorting vector v" <<endl;
    
    // Initializing and sorting a vector
    vector<int> v = {7, 5, 10};
    sort(v.begin(), v.end());  // Sorting the vector in ascending order

    for(auto k:v){
        cout << k << " ";
    }
    
    cout << endl;
    
    cout << "Partial Sorting of array a" <<endl;
    
    // Sorting a sub-array from index 2 to index 4
    sort(a + 2, a + 5);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    cout << endl;
    
    cout << "Sorting array a in descending order" <<endl;
    
    // Sorting the entire array in descending order
    sort(a, a + n, greater<int>());
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    pair<int, int> arr[] = {{8, 4}, {5, 2}, {8, 6}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n, comparator);
    
    cout << "Sorted array arr of pairs" << endl;
    // Output the sorted pairs
    for (int i = 0; i < n; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    

    int i = 5;
    cout << "binary representation of 5: " << __builtin_popcount(i) << endl;  // Outputs the number of 1's in the binary representation of 5

    long long j = 987654321444333;
    cout << "binary representation of " << j << ": " << __builtin_popcountll(j) << endl;  // Outputs the number of 1's in the binary representation of j
    

    string str = "bac";
    cout << "Permutation of string " << str << ": " <<  endl;
    sort(str.begin(), str.end());
    do {
        cout << str << endl;  // Outputs each permutation of the string
    } while (next_permutation(str.begin(), str.end()));

    int a[] = {13, 5, 17, 9, 70, 43, 15};
    int n = sizeof(a)/sizeof(a[0]);  // Length of the array
    
    // Finding and printing the maximum element in the array
    int max_val = *max_element(a, a + n);
    cout << "Maximum value: " << max_val << endl;

    return 0;
}