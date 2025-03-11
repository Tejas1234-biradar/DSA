#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    vector<int> b;
    vector<int> k;
    vector<int> s;

    for (int i = 0; i < 5; i++)
    {
        a.push_back(i);
        k.push_back(i);
    }
    b.push_back(1);
    b.push_back(12);
    b.push_back(13);
    b.push_back(15);
    b.push_back(2);
    k.push_back(1);
    k.push_back(12);
    k.push_back(13);
    k.push_back(15);
    k.push_back(2);
    for(auto it=a.begin();it!=a.end();++it){
        for(auto rit=k.begin();rit!=k.end();++rit){
            if (*rit==*it)
            {
                k.erase(it);
            }
            
        }
    }
    for(auto val:k){
        cout<<val<<endl;
    }

    
}