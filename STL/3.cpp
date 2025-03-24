#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={4,4,4,5,5,5,5,5,1,1,1};
    map<int,int> freq;
    for(auto val: arr){
        freq[val]++;
    }
    multimap<int,int> sorted_freq;
    for(auto val:freq){
        sorted_freq.insert({-val.second,val.first});
    }
    for(auto val:sorted_freq){
        int frequency=-(val.first);
        int element=val.second;
        for (int i = 0; i < frequency; i++)
        {
            cout<<element<<" ";
        }
    }
    
    return 0;
}