#include<vector>
using namespace std;
//recursive implementation my fav
    int search(vector<int>& a, int target) {
        return binarySearch(a, target, 0, a.size() - 1);
    }


    int binarySearch(vector<int>& a, int target, int low, int high) {
        if (low > high) return -1;

        int mid = low + (high - low) / 2;
        if (a[mid] == target) return mid;
        if (target < a[mid]) return binarySearch(a, target, low, mid - 1);
        return binarySearch(a, target, mid + 1, high);
    }
//easirer loops approach
int binarySearch1(vector<int>&a,int target){
    int low=0;
    int n=a.size();
    int high =n-1;
    while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==target)return mid;
    else if(target>a[mid]){
            low=mid+1;

        }
    else high=mid-1;
    }
    return -1;
}

