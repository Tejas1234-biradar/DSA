#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int k;
    cout<<"Enter k:"<<endl;
    cin>>k;
    vector<int> arr={4,4,4,5,5,5,5,5,1,1,1};
    map<int,int> freq;
    for(auto val: arr){
        freq[val]++;
    }
    multimap<int,int> sorted_freq;
    for(auto val:freq){
        sorted_freq.insert({-val.second,val.first});
    }
    int count=0;
    for(auto val:sorted_freq){
        if(count==k) break;
        int frequency=-(val.first);
        int element=val.second;
        cout<<element<<" ";
        count++;
    }
    return 0;
    
    
}
    
