#include<iostream>
#include<unordered_map>
#include<sstream>
using namespace std;
int main(){
    unordered_map<string,int> ump;
    string sentence="Naruto Sasuke Naruto Sakura Sakura";
    
    stringstream ss(sentence);
    string word;
    while(ss>>word){
        ump[word]++;
    }
    for(auto it=ump.begin();it!=ump.end();){
        if(it->second==1){
            it=ump.erase(it);
        }
        else{
            ++it;
        }
    }
    for(auto pair:ump){
        cout<<pair.first<<"->"<<pair.second<<endl;
    }
}