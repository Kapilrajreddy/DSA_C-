#include <iostream>
using namespace std;

int solution(int n, string arr[]){
  int total = 0; 
  for(int i=0;i<n;i++){
      int len = arr[i].size(); 
      total+=len;
  }
  return total;
} 

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    string arr[n];
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = solution(n, arr);
    cout << "Total length of concatenated string: " << result << endl;

    return 0;
}
