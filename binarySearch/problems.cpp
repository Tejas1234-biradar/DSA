#include<iostream>
#include<vector>
#include<climits>
#include<unordered_map>
using namespace std;
/*int search(vector<int> &nums,int target){
int low=0;
int n=nums.size();
int high=n-1;
int lowest=0;
int index=-1;
while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==lowest){
            index=mid;
            high=mid-1;
        }
        else if (nums[mid]<lowest){
                low=mid+1;
            }
        else  high =mid-1;
        }
vector<int> temp;
    for(int i=0;i<=index;i++){
        temp[i]=nums[index+i];
    }
    for(int i=index;i<=n;i++){
        temp[i]=nums[i-index];
    }
low=0;
high=n-1;

while(low<=high){
        int mid=(low+high)/2;
        if(temp[mid]==target){
        return mid;
        }
        else if(temp[mid]<target){
            low=mid+1;
        }
        else high=mid-1;
    }
    return -1;
    
}*/ 

int search(vector<int> &a, int target) {
    int low = 0;
    int high = a.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == target) return mid;

        // Check if the left half is sorted
        if (a[low] <= a[mid]) {
            // If target is within the left half
            if (target >= a[low] && target < a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        // Otherwise, right half must be sorted
        else {
            // If target is within the right half
            if (target > a[mid] && target <= a[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}
bool searchwithDuplicates(vector<int> &a, int target) {
    int low = 0;
    int high = a.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == target) return true;
        if(a[low]==a[mid]&& a[mid]==a[high]){
            low=low+1;
            high=high-1;
            continue;
        }

        // Check if the left half is sorted
        if (a[low] <= a[mid]) {
            // If target is within the left half
            if (target >= a[low] && target < a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        // Otherwise, right half must be sorted
        else {
            // If target is within the right half
            if (target > a[mid] && target <= a[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return false;//when problems like these always try to solve for unique then check where unique fails        

}
int findMin(vector<int> &a){
    int low=0;
    int n=a.size();
    int high=n-1;
    while(low<high){
    int mid=(low+high)/2;
    
    if(a[mid]>a[high]){
        low=mid+1;
    }
    else high=mid;
}
    return a[low];
}
int findMin2(vector<int> a){
    int low=0;
     int high=a.size()-1;
    int ans=INT_MAX;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(a[low]<=a[high]){
        ans=min(ans,a[low]);
        break;
        }
        if(a[low]<=a[mid]){
            ans=min(a[low],ans);
            low=mid+1;
        }
        else{
            high=mid-1;
            ans=min(ans,a[mid]);
        }
    }
    return ans;
}
int findRotated(vector<int> a){
   int low=0;
     int high=a.size()-1;
    int ans=INT_MAX;
    int index=0;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(a[low]<=a[high]){
            if(a[low]<ans){
        index=low;
        ans=a[low];
        break;
        }
        }
        if(a[low]<=a[mid]){
            if(a[low]<ans){
            ans=a[low];
            index=low;
            
        }
            low=mid+1;
        }
        else{
            high=mid-1;
            if(a[mid]<ans){
            index=mid;
            ans=a[mid];
        }
        }
        return index;
    }
}
/*int singleElement(vector<int> a){
        int n=a.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(a[i]>maxi) maxi=a[i];
        }
        int hash[maxi+1]={0};
        for(int i=0;i<n;i++){
            hash[a[i]]++;
        }
        for(int i=0;i<n;i++){
        if(hash[a[i]]==1) return a[i];
    }
    return -1;

}*///didnt handle the error case where mid-1 and mid+1 exceeded the array bounds
///failed on test case 1,2,2,3,3 because i made a small error in code where i returned mid+1 instead of mid
///
int singleNonDuplicate(vector<int> a){
    int low=0;
    int high=a.size()-1;
    while(low<=high){

        int mid=(low+high)/2;
        if(mid==0)(
            if(a[mid]!=a[mid+1]){
                    return a[mid+1];

                }
                else low=mid+1;
                continue;
        )
        if(mid==(n-1)){
            if(a[mid]!=a[mid-1]){
                return a[mid];
            }
            else high=mid-1;
            continue;
        }
        if(a[mid]!=a[mid+1]&&a[mid]!=a[mid-1]) return a[mid];
        else if(mid%2==0){
            if(a[mid]==a[mid+1]){
                low=mid+1;
            }
            else high=mid-1;
        }
        else{
            if(a[mid]==a[mid+1]){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
    }
}
int findPeak(vector<int> a){
    int low=0;
    int n=a.size();
    int high=n-1;
    if(n==1) return a[0];
    while(low<=high){
        int mid=(low+high)/2;
        //the edgecase where we are at the start of our array i do a continue since that cant be our findPeak
        if(mid==0){
            if(a[mid]>a[mid+1]) return a[mid];
            else{
            low=mid+1;
            continue;
            }
        }
        if(mid==n-1){
            if(a[mid]>a[mid-1]) return a[mid]; 
            else{ 
            high=mid-1;
            continue;
            }
        }
        //the case where we find out our asnwer
        if(a[mid]>a[mid+1]&&a[mid]>a[mid-1]){
            return a[mid];
        }
        //now the case where we dont get the answer how am i going to know on which side my peak is ?? haha not as easy now huh
        //okay if we are on left side that would mean that a[mid]<a[mid+1] then we do low=mid+1; boom cold turkeyed a hard question baby
        if(a[mid]<a[mid+1]){
            low=mid+1;
        }
        else high =mid-1;
    } 
    return -1;
}

int main(){
    vector <int> a={4,5,6,7,0,1,2,3};
    vector<int> b={1,1,2,2,3,3,4,5,5,6,6};
    cout<<search(a,0)<<endl;
    cout<<findMin2(a)<<endl;
    cout<<findRotated(a)<<endl;
    cout<<singleNonDuplicate(b);
    return 0;
}
