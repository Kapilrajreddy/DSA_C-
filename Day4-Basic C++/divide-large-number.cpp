#include <bits/stdc++.h>
using namespace std;

void DivideLargeNumber(long long num1, int num2){
    cout << fixed << setprecision(2) << (double)num1 / num2 << endl;
}

// int main() {
//     long long num1;
//     int num2;
//     cin>>num1>>num2;
//     DivideLargeNumber(num1,num2);

//     return 0;
// }

class solution{
    public:
        double divide(long long num,int divisor){
            return (double)num/divisor;
        }
};


int main(){
    long long num;
    int divisor;

    cin>>num>>divisor;

    solution sol;

    double result = sol.divide(num,divisor);

    cout<<fixed<<setprecision(2)<<result<<endl;

    return 0;
}

// Complexity Analysis
// Time Complexity: O(1)

// The division operation and printing the result both take constant time.
// Space Complexity: O(1)

// The function uses a constant amount of space for the input values and the result.

