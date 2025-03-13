#include<bits/stdc++.h>
#include<iostream>
#include <cmath>
#include<vector>
using namespace std;
int countDigits(int n){
    int count=(int)(log10(n)+1);
    return count;
}
int revNum(int n){
    int rev=0;
    // int last=0;
    while(n>0){
        
      int last=n%10;
      rev=(rev*10)+last;
      n = n / 10;
      
    }
    return rev;
}
bool palindrome(int n){
    int rev=0;
    int dup=n;
    // int last=0;
    while(n>0){
        
      int last=n%10;
      rev=(rev*10)+last;
      n = n / 10;
      
    }
    if(dup==rev) return true;
    else return false;
}
 // for pow()

bool armstrong(int n) {
    int digits=countDigits(n);
    int sum=0;
    int dup=n;
    // Step 2: Calculate the sum of each digit raised to 'digits' power
    while(n > 0){
        int last = n % 10;
        sum += pow(last, digits); // instead of last*last*last
        n /= 10;
    }

    // Step 3: Check if it is an Armstrong number
    return sum == dup;
}
vector<int> divisors(int n){
    vector<int> v;
    for (int i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            v.push_back(i);
        }
        if(n/i!=i) v.push_back(n/i);
    }
    sort(v.begin(),v.end());
    return v;
    
}
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int gcd(int n1, int n2) {
    int hcf = 1;
    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}
int euclideangcd(int a ,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;

    }
    return (a == 0) ? b : a;
}
int main(){
    int n=7;
    cout<<countDigits(n)<<endl;
    cout<<revNum(n)<<endl;
    if(palindrome(n)){
        cout<<"palindrome"<<endl;
    }
    else cout<<"not palindrome"<<endl;
    if(armstrong(n)){
        cout<<"armstrong"<<endl;
    }
    else cout<<"not armstrong"<<endl;
    if(isPrime(n)){
        cout<<"Prime"<<endl;
    }
    else cout<<"not Prime"<<endl;
    for(auto val:divisors(n)){
        cout<<val<<" "<<endl;
    }
    cout<<gcd(20,40)<<endl;
    cout<<euclideangcd(52,2)<<endl;
    return 0; 
}