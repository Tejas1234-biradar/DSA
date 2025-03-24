#include<iostream>
using namespace std;
void printNumbers(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    printNumbers(i-1,n);
}
int main(){
    int n=4;
    printNumbers(4,n); 
}


