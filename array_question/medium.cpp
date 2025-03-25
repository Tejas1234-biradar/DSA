#include <iostream>
#include<map>
#include<vector>
using namespace std;
bool twoSumProblem(vector<int> a,int target){
//int sum=0;brute force
//for(int i=0;i<a.size(),i++){
//    for(int k=i+1;i<a.size(),k++){
//            sum=a[i]+a[k];
//            if(sum==target) return true;
//        }
//    }
//    return false
    map<int,int> mpp;//map to sore the index and element
    for (int i = 0; i <a.size(); i++) {
        int k=a[i];
        int more=target-k;//we check whether there is more in the hash map the more reprsesnts how mow mre should we add to the value at i reach to target
        if(mpp.find(more)!=mpp.end()){
            return true;//return (mpp[more],mpp[i])
        }
        mpp[k]=i;//key is the element and i is index 
    }
    //SC=0{1}since we just sorted array
//int left=0,right =a.size()-1;
//    sort(a.begin(),a.end());
//    while(left<right){
//        int sum=a[left]+a[right];
//        if(sum==target) return true;
//        else if(sum<target) left ++;
//        else right --;
//    }
}
int main(){
    vector<int> a={1,23,5,1,325,1121,0,10};
    
}
