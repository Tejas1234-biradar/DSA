#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<int,string> mp;
    mp.insert({1,"one"});
    mp.insert({2,"two"});//inserting multiple values for the same key
    mp.insert({1,"Uno"});
    mp.insert({2,"Dwei"});
    mp.insert({2,"Ni"});
    mp.insert({2,"Do"});
    for(auto val : mp){
        cout<<val.first<<"->"<<val.second<<endl;
    }
    auto range=mp.equal_range(2);
    for(auto it=range.first;it!=range.second;++it){//initially thought mp.equal_range returned an map so used it.begin() instead of it.first i dont know what it is returning
        cout<<it->first<<"->"<<it->second<<endl;
    }
    mp.erase(1);//similar to multisets by default deletes all the instances of a duplicate elemnt
    for(auto val : mp){
        cout<<val.first<<"->"<<val.second<<endl;
    }
}