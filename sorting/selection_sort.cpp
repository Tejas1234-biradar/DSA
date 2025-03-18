#include<iostream>
using namespace std;
int main(){
    int arr[]={13,21,24,89,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size-1; i++) {
        int min=i;
       for (int j = i+1; j <size ; j++) {
       if(arr[j]<arr[min])min=j; 
       } 
        swap(arr[min],arr[i]);
    }
    for(auto val:arr){
        cout<<val<<" ";
    }
    
}
