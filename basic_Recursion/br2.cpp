#include<iostream>
using namespace std;
void printName(int n,int i,string s){
if(i==n)break;
    i++;
    cout<<s<<endl;
    printName(n,i,s);
}
int main(){
    string s;
    cout<<"Enter your name";
    cin>>s;
    cout<<"Enter the number of time you want to print yout name";
    cin>>n;
     printName(n,0,s);
}
