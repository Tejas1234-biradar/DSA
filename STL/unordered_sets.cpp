#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> uset={0,1,2,3};
    uset.insert(12);
    uset.insert(2);
    uset.insert(11);
    for(auto val:uset){
        cout<<val<<endl;
    }
    if(uset.find(2)!=uset.end()){
        uset.erase(2);
        cout<<"Found and removed\n";
    }
    else{
        cout<<"Never existed\n";
    }

}