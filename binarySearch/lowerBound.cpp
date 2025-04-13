#include<vector>
#include<iostream>
using namespace std;
int lowerBound(vector<int> a,int x){
    int low=0;
    int n=a.size();
    int high =n-1;
    int ans=n;
    while(low<=high){
    int mid=(high+low)/2;
    if(a[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int upperBound(vector<int> a,int x){
    int low=0;
    int n=a.size();
    int high =n-1;
    int ans=n;
    while(low<=high){
    int mid=(high+low)/2;
    if(a[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }

}
/*Lower Bound: The first index at which the target could be inserted while maintaining the order, such that all values at or before that index are less than or equal to the target.
Upper Bound: The first index where a value greater than the target could be inserted.
*/
int searchInsert() //same as lowerBound

