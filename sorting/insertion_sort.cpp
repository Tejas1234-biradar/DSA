#include<iostream>
using namespace std;
int main(){
    int arr[]={12,15,18,20,22,2,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        int j=i;
        while(j>0&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
    for(auto val:arr){
        cout<<val<<" ";
    }
    }
