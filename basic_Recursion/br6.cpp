#include<iostream>
using namespace std;
void backTracking(int i,int n){
    if(i<1) return;
    backTracking(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n=4;
    backTracking(3,3);
}




