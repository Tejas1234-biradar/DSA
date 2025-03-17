#include<iostream>
using namespace std;
void swapping(int l,int r,int a[10])
{
    if(l>=r)return;
    swap(a[l],a[r]);
    swapping(l+1,r-1,a);
}
bool pallindrome(int i,int n,string s)
{
    if(i>=n/2)return true;
    if(s[i]!=s[n-i-1]) return false;
    return pallindrome(i+1,n,s);
}
void swapWithonevariable(int i,int n,int a[]){
    if(i>=n/2)return;
    swap(a[i],a[n-i-1]);
    swapWithonevariable(i+1,n,a);
}
int fibonacci(int n){
    if(n<1||n==1) return 1;
    int fibo=fibonacci(n-1)+fibonacci(n-2);
    return fibo;//fibonacci(n-1) gets executed first in multiple functional recursoin calls

}
int main(){
    int arr[]={1,2,3,4,5};
    string s="madam";
    (pallindrome(0,5,s))?cout<<"True"<<endl:cout<<"False"<<endl;
    //swapping(0,4,arr);,
    swapWithonevariable(0,5,arr);
    for(auto val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++) {
        cout<<fibonacci(i)<<" ";
    }
}
