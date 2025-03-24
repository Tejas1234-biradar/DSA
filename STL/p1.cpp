// You are given N numbers. You have to store them in a vector, and then:

// Remove all the elements that are greater than X.
// Print the remaining elements in reverse order.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int N;
    // int i=0;
    int X;
    cout<<"Enter N";
    cin>>N;
    cout<<"Enter X";
    cin>>X;
    // v.resize(N);
    for (int i=0;i < N; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    // int j=0;
for(auto it=v.begin();it!=v.end();)
{
    if(*it>X){
        it=v.erase(it);
    }
    else{
        ++it;
    }
}
   auto rit=v.rbegin();
   while(rit!=v.rend()){
    cout<<*rit<<" ";
    ++rit;
   }
}