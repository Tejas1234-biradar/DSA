#include<bits/stdc++.h>
using namespace std;
void print( int count){
    
   if(count==4) return;
    cout<<count<<endl;
    count=count+1;
    print(count); 
}
int main(){
    int count=1;
    print(count);
}
//segemntation fault happens when compiler run out of memmory
