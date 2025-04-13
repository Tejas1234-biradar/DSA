#include<vector>
#include <iostream>
using namespace std;
vector<int> firstandLast(vector<int> a,int x){
  int first = -1, last = -1;
        int n = a.size();
        
        // Edge case: If the array is empty
        if (n == 0) return {-1, -1};

        int low = 0, high = n - 1;
        
        // Find the first occurrence of x
        while (low <= high) {
            int mid = (low + high) / 2;
            if (a[mid] == x) {
                first = mid;
                high = mid - 1; // Move left to find the first occurrence
            } else if (a[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        low = 0, high = n - 1;
        
        // Find the last occurrence of x
        while (low <= high) {
            int mid = (low + high) / 2;
            if (a[mid] == x) {
                last = mid;
                low = mid + 1; // Move right to find the last occurrence
            } else if (a[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        // If first and last are still -1, that means x was not found
        return {first, last};
    }
int main()
{    vector<int> a={2,2,2,2,4,4,5,6,6,8,9,10,20};
    for(auto val:firstandLast(a,2)){
    cout<<val<<" ";
    }
}



