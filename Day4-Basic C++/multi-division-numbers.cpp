#include <bits/stdc++.h>
using namespace std;

void computeResults(float num1, float num2) {
    cout << fixed << setprecision(2) << num1 * num2 << endl;
    if (num2 != 0) {
        cout << fixed << setprecision(2) << num1 / num2 << endl;
    } else {
        cout << "Undefined" << endl;
    }
}

// int main() {
//     float num1, num2;
//     cin >> num1 >> num2;
//     computeResults(num1, num2);
//     return 0;
// }

vector<string> computeResults1(float num1, float num2){
    vector<string> result;

    ostringstream out1;

    out1<<fixed<<setprecision(2)<<num1*num2;
    result.push_back(out1.str());

    if(num2 != 0){
        ostringstream out2;
        out2<<fixed<<setprecision(2)<<num1/num2;
        result.push_back(out2.str());
    }else {
        result.push_back("Undefined");
    };

    return result;

}


int main(){
    float num1,num2;
    cin>>num1>>num2;

    vector <string> result = computeResults1(num1,num2);

    for(string value: result){
        cout<<value<<"\n";
    }

    return 0;


}
// Complexity Analysis
// Time Complexity: O(1)  

// The operations performed (multiplication, division, and a conditional check) are constant-time arithmetic operations.
// Space Complexity: O(1)  

// No extra space is used, as the function directly prints the output.