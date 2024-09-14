#include <iostream>
using namespace std;

class Solution {
public:
    int arraySum(int arr[], int n) {
        int total = 0; 
        for (int i = 0; i < n; i++) {
            total += arr[i];
        }
        return total;
    }
};

int main() {
    Solution sol;
    int arr[] = {1, 2, 3, 14, 15}; // example array
    int n = sizeof(arr) / sizeof(arr[0]); // size of array

    int result = sol.arraySum(arr, n);
    cout << "Sum of elements in array: " << result << endl;

    return 0; // program executed successfully
}
