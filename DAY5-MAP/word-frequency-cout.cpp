#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void countWords(map<string, int>& wordCount, const string& paragraph) {
     stringstream ss(paragraph);
     string word;
     while (ss >> word) {
        wordCount[word]++;
    }
        
    }
    
    void displayWordCount(const map<string, int>& wordCount) {
        for (const auto& pair : wordCount) {
        cout << pair.first << "-" << pair.second << endl;
    }
        
    }
};

/*
int main() {
    unordered_map<string, int> wordCount;
    string paragraph = "the quick brown fox jumps over the lazy dog the quick fox";
    countWords(wordCount, paragraph);
    displayWordCount(wordCount);
    return 0;
}
*/