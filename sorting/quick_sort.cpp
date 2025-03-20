#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot&&i<=high){
            i++;//we dont touch things lesser than pivot from the front of array;
        }
        while(arr[j]>pivot&&j>=low){
            j--; //we dont touh elements greater than pivot from back of array we run till i <j;

        }
        if(i<j) swap(arr[i],arr[j]);//do we swap in none of the above conditions is true and no while loop runs or we could say we dont swap till next i or j position lock(imagine fniding the position wher while loop condition fails thats the spot we search for and swap kind of cool)

    }
    swap(arr[low],arr[j]);//here we swap the pivot with out partition index
    return j;
}
void qS(vector<int> &arr,int low,int high){
    if(low<high){
        int mid=partition(arr,low,high);
        qS(arr,low,mid-1);
        qS(arr,mid+1,high);

    }
    else return;
}
int main(){
    vector<int> arr={12,13,15,90,101,29,0,2001};
    qS(arr,0,arr.size()-1);
    for(auto val:arr){
        cout<<val<<" ";
    }
}
