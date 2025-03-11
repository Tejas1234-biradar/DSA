#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> a={0,1,2,3,4};
    set<int> b={12,1,2,3,4};
    set<int> s;
    for(auto val:a){
        bool found;
        if(b.find(val)==b.end()){
            s.insert(val);
        }
        

    }
    for(auto val:b){
        bool found;
        if(a.find(val)==a.end()){
            s.insert(val);
        }
        

    }
    for(auto val:s){
        cout<<val<<endl;
    }
}