#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[5]={12,14,12,12,12};
    int n=5;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int max_freq=0,min_freq=n+1;
    int maxEle=-1,minEle=-1;
    for(auto pair:mpp){
        if(pair.second>max_freq){
            max_freq=pair.second;
            maxEle=pair.first;
        }//here we change the max freq and min freq
        if(pair.second<min_freq){
            min_freq=pair.second;
            minEle=pair.first;
        }
    }
    cout<<"The element "<<maxEle<<" appeared "<<max_freq<<" highest time "<<endl;
    cout<<"The element "<<minEle<<" appeared "<<min_freq<<" lowest time "<<endl;
}
