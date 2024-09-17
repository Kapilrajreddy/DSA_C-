#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void insert(queue<int> &q, int k){
        q.push(k); // Insert element k into the queue
    }
    
    int findFrequency(queue<int> &q, int k){
       int frequency = 0; 
       int h = q.size(); // Store the original size of the queue
       
       while(h){ // Iterate through the queue
           h = h - 1;
           int x = q.front(); // Get the front element
           q.pop(); // Remove the front element
           
           if(x == k){
               frequency += 1; // If it's the element we're looking for, increase frequency
           }
           
           q.push(x); // Push the element back into the queue to maintain order
       }
       
       return frequency; // Return the frequency of element k
    }
};

int main() {
    queue<int> q;
    Solution sol;

    // Insert elements into the queue
    sol.insert(q, 1);
    sol.insert(q, 2);
    sol.insert(q, 3);
    sol.insert(q, 2);

    // Find the frequency of element 2
    cout << "Frequency of 2: " << sol.findFrequency(q, 2) << endl;

    return 0;
}
