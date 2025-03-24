#include<iostream>
using namespace std;
void sum_parameterised(int i,int sum){
    if(i<1) {
     cout<<sum<<endl;    
        return;
    }   //in this method we print after the break condition is satisfied not after that
    sum_parameterised(i-1,sum+i);//makesure that you dont messup the parmameters or there is gonna be a infinite loop
}
int main(){
    int n=4;
    sum_parameterised(n,0); 
}

