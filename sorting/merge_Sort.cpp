#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int high,int low,int mid){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid &&right<=high){
    if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
    else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void merge_Sort(vector<int> &arr,int low,int high){
    int mid=(low+high)/2;
    if(low==high) return;
    merge_Sort(arr,low,mid);
    merge_Sort(arr,mid+1,high);
    merge(arr,high,low,mid);
}
int main(){
    //why merge sort takes better time complexity
    vector<int> arr={12,22,24,72,91,1,0};
    merge_Sort(arr,0,6);
    for(auto val:arr){
        cout<<val<<" ";
    }

}
