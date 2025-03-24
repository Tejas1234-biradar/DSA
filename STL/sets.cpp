#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> a;
    set<int> b;
    int sum=0;
    set<int> s;
   for (int i = 0; i < 5; i++)
   {
    a.insert(i);
   }
   b.insert(2);
   b.insert(3);
   b.insert(10);
   b.insert(11);
   for(auto val:a){
    if(b.find(val)!=b.end()){
       s.insert(val); 
       sum=sum+val;
    }
   }
   for(auto val:s){
    cout<<"{"<<val<<",";
   }
   cout<<"}";
   cout<<"The addition of unique elements is:"<<sum;
}