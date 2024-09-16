#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Solution function that processes the vector of pairs
void solution(vector<pair<int, string>> &pairs) {
    int total = 0;  // Variable to hold the sum of integers
    string sent = "";  // Variable to hold the concatenated strings

    // Iterate through each pair in the vector
    for (auto K : pairs) {
        total += K.first;  // Add the integer part of the pair to the total
        sent += K.second;  // Concatenate the string part of the pair to 'sent'
    }

    // Output the results
    cout << total << endl;  // Print the total sum
    cout << sent << endl;   // Print the concatenated string
    cout << sent.size() << endl;  // Print the length of the concatenated string
}

int main() {
    // Sample input: Vector of pairs
    vector<pair<int, string>> pairs = {
        {5, "code"},
        {15, "challenge"},
        {25, "is"},
        {10, "fun"}
    };

    // Call the solution function with the sample input
    solution(pairs);

    return 0;
}
