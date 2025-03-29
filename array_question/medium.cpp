#include <climits>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

bool twoSumProblem(vector<int> a, int target) {
    map<int, int> mpp;  // Map to store elements and their indices

    for (int i = 0; i < a.size(); i++) {
        int k = a[i];
        int more = target - k;  // Needed value to reach the target

        if (mpp.find(more) != mpp.end()) {
            return true;  // Pair found
        }

        mpp[k] = i;  // Store element index
    }
    return false;  // No pair found
}
void dutchalgo(vector<int> &a){
int n=a.size();
int low=a[0];
int mid=a[0];
int high=n-1;
while(mid<=high){
        
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
    }
        else if(a[mid]==1)mid++;
        else {
    swap(a[mid],a[high]);
    high--;

}
    }
}
//int majorityElement(vector<int>a){
//    int n= a.size();
//    int max=-1;
//    for(int i=0;i<n;i++){
//        if(max<a[i]) max=a[i];
//    }
//    int hash[max+1]={0};
//    for(int i=0,i<(max+1),i++){
//        hash[a[i]]++;
//        if(hash[i]>=n/2) return hash[i];
//        }
//    return 0;
//}
int morealgo(vector<int> a){
  int el = a[0]; // Initialize with the first element
        int cnt = 1;

        for (int i = 1; i < a.size(); i++) { // Start from index 1
            if (cnt == 0) {
                el = a[i];
                cnt = 1;  // Reset to 1 instead of 0
            } 
            else if (a[i] == el) cnt++;
            else cnt--;
        }
        return el;
    }
}
//int maxSubarraySum(vector<int>a){
//    int maxSum=INT_MIN;
//    int n=a.size();
//    unordered_map<int, int> sumFreq;
//    for(int i=0;i<n;i++){
//        int sum=0;//we reasssign sum to 0 after every iteration to for subarray sum
//        for(int j=i;j<n;j++){
//            sum=sum+a[i];
 //           sumFreq[sum]++;
//            maxSum=max(sum,maxSum);
//        }
//    }
//    return maxSum;
//}
int kadanealgo(vector <int> a){
    int curSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<a.size();i++){
        if(curSum<0)curSum=0;
        curSum=curSum+a[i];
        maxSum=max(maxSum,curSum);
    }
    return maxSum;
}
int stocks(vector<int> a){
    int mini=a[0];
    int n=a.size();
    int cost=0;
    int profit=0;
    for(int i=0;i<n;i++){
        cost=a[i]-mini;//we keep only tracj of the minimum day when stock price is leasst
        profit=max(cost,profit);//we maximize the profit;
        mini=min(a[i],mini);//we check whether curr element is greater than mini i fyes we swap
    }
    return profit;
}//streak

int main() {
    vector<int> a = {1, 23, 5, 1, 325, 1121, 0, 10};
    int target = 6;
    vector<int> b={0,1,2,1,2,1,2,1,0,0};
    dutchalgo(b);
    for(auto val:b) cout<<val<<" ";

    cout << (twoSumProblem(a, target) ? "Found" : "Not Found") << endl;
    return 0;
}
