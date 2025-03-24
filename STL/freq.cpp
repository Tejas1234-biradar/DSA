#include <iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
    vector<int> v={4,5,6,4,3,5,4,3};
    map<int,int> freq;
    for(auto val:v){
        freq[val]++;//element->frequency
    }
    multimap<int,int> sorted_freq;
    for(auto val : freq){
        sorted_freq.insert({-val.second,val.first});//by default multimap sorts in ascendin order but for this question we need to in descending order so we negate the value whihc we want descending in this case its the frequency
    }
    for(auto val : sorted_freq){
        int freq_count=-(val.first);//here we make it positive again since we sorted out values in the multimap
        int element=val.second;
        for (int i = 0; i < freq_count; i++)
        {
            cout<<element<<" "<<endl;
        }
        
    }

    return 0;
}