#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"initial Capacity"<<v.capacity()<<endl;
    cout<<"initial Size"<<v.size()<<endl;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        cout<<"Added"<<i<<" in vector\n| capacity:"<<v.capacity()<<"\n| size"<<v.size();
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout<<v[i]<<" ";
    }
    v.pop_back();
    v.pop_back();
    cout<<"\nsize after pop"<<v.size();
    cout<<"\ncapacity after pop"<<v.capacity();
    v.clear();
    cout<<"\nsize after clear"<<v.size();
    cout<<"\ncapacity after clear"<<v.capacity();        
}