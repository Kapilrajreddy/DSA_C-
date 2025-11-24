#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>m1;
    map<int,pair<int,int>>m2;
    map<pair<int,int>,int>m3;
    map<char,string>m4;

    m1[4] = 3; 
    m1.insert({7,6});
    m1.emplace(5,8);

    for(auto i: m1){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto iter = m1.find(7); //search the key
    cout<<(*iter).second<<endl; 

    auto a = m1.find(7);
    cout<<(*a).second<<endl; //6
    auto b = m1.find(9);
    cout<<(*b).first<<(*b).second<<endl; //3
    return 0;
}
