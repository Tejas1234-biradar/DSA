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
/*int morealgo(vector<int> a){
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
}*/ 


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
}
//brute force didnt comeup with this myself dont have a notebook rn so i couldnt write it down
/*void rearrange(vector<int> &a){
    int n=a.size()
    vector<int> pos;
    vector<int> neg;
    for(int i<=0;i<n;i++){
        if(a[i]>0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    for(int i=0;i<=n2;i++){
        a[2*i]=pos[i];//positive elements
        a[2*i+1]=neg[i]
    }//take the positives in pos array and shove it in neg arr then shove it in big arr using logic since alternatte so positive on 2*i and neg on odd indices


}*/
//optimal approach
vector<int> rearrangeArray(vector<int> &a){
vector <int> ans(n,0);
int posIndex=0;
int negIndex=1;
int n=a.size()
for(int i-0;i<n;i++){
        if(a[i]<0) {
            ans[negIndex]=a[i];
            negIndex+=2;
        }
        else {
            ans[posIndex]=a[i];
            posIndex+=2;
        }
    }
    return ans;
}

    void nextPermutation(vector<int>& a) {
        int n = a.size();
        int ind = -1;

        // Step 1: Find the breakpoint
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < a[i + 1]) {  // Find the first decreasing element
                ind = i;
                break;
            }
        }

        // Step 2: If there's a breakpoint, find the next larger element and swap
        if (ind != -1) {
            for (int i = n - 1; i > ind; i--) {  // Find the smallest larger element
                if (a[i] > a[ind]) {
                    swap(a[i], a[ind]);
                    break;
                }
            }
        }

        // Step 3: Reverse the suffix
        reverse(a.begin() + ind + 1, a.end());

        // If there was no breakpoint (ind == -1), this automatically reverses the entire array
    }

vector<int> spiralOrder(vector<vector<int>> &matrix){
    int n=matrix.size();
    int m=matrix(0).size();
    int left=0,right=m-1;
    int top=0;bottom=n-1;
    vector<int> ans;
    while(top<=bottom&& left<=right){
        //right movement
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[i][top]);
        }
        top++;
        //top right to bottom right
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[right][i]);
        }
        right--;
        //bottom right to bottom left
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[i][bottom]);
            }
            bottom--;
        //bottom left to top left
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[left][i]);
            }
            left++;
        }
    }
    return ans;
}


int main() {
    vector<int> a = {1, 23, 5, 1, 325, 1121, 0, 10};
    int target = 6;
    vector<int> b={0,1,2,1,2,1,2,1,0,0};
    dutchalgo(b);
    for(auto val:b) cout<<val<<" ";

    cout << (twoSumProblem(a, target) ? "Found" : "Not Found") << endl;
    return 0;
}
