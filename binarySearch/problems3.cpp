#include <algorithm>
#include <climits>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>a,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>=x){
        ans=mid;
        high=mid-1;
        }
        else low=mid+1;
    }
return ans;
}
//o(nxlogn)
int max1s(vector<vector<int>> &a,int n,int m){
    int cnt_max=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int cnt_ones=m-lowerBound(a[i],m,1);
        if(cnt_ones>cnt_max){
            cnt_max-cnt_ones;
            index=i;
        }
    }
    return index;
}
bool binarySeach(vector<int> a,int k){
    int low=0;
    int high=a.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==k){
            return mid;
        }
        if(a[mid]>k){
            high=mid-1;
        }
        else low=mid+1;
    }
    return -1;
}
//o(nxlogm)
bool searchIn2Dmatrix(vector<vector<int>> &mat,int n,int m,int target){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            return binarySeach(mat[i], target);
        }
    }
    return false;

}
//o(logn*logm)
bool search(vector<vector<int>> &mat,int n,int m,int target){
int low=0;
int high=(n*m-1);
while(low<=high){
        int mid=(low+high)/2;
        int row=mid/m;
        int col=mid%m;
        if(mat[row][col]==target)return true;
    
    if(mat[row][col]>target){
        high=mid-1;
    }
    else low=mid+1;
}
    return false;
}
bool search2(vector<vector<int>> &mat,int target){
    int m=mat.size();
    int n=mat[0].size();
    int row=0;
    int col=n
    while(row<=m&&col>=0){
        if(mat[row][col]==target) return true;
        elif(mat[row][col]<target)row++;
        elif(mat[row][col]>target)col--;
    }
    return false;

}
vector<int> findMinMaxIndex(vector<vector<int>> &mat,int n,int m,int col){
    int maxValue=-1;
    int maxindex=-1;
    int minValue=INT_MAX;
    int minIndex=-1;
    for(int i=0;i<n;i++){
        if(mat[i][col]>maxValue){
            maxValue=mat[i][col];
            maxindex=i;
        }
        else if(mat[i][0]<minValue){
            minValue=mat[i][0];
            minIndex=i;
        }
    }
    return {minIndex,maxIndex,minValue,maxValue};
}
vector<int> findPeakGrid(vector<vector<int>> &mat,int target){
    int n=mat.size();
    int m=mat[0].size();
    int low=0;
    int high=m-1;//high is set to number of coloumns in the matrix
    while(low<=high){
    int mid=(low+high)/2;
    int maxRowIndex=findMinMaxIndex(mat,n,m,mid)[1];
    int left=mid-1>=0?mat[maxRowIndex][mid-1]:-1;
    int right=mid+1<m?mat[maxRowIndex][mid+1]:-1;
    if(mat[maxRowIndex][mid]>left&&mat[ maxRowIndex][mid]>right){
            return {maxRowIndex,mid};
        }
    else if(mat[maxRowIndex][mid]<left){
            high=mid-1;
        }
    else low=mid+1;
    }
    return{-1,-1};
}
int upperBound(vector<int>a,int k){
int low=0;
int high=a.size();
while(low<=high){
     int mid=(low+high)/2;
      if(a[mid]<=k){
        low=mid+1;
        }
    else high=mid-1;
        }
return low;//number of elements lower than k are index 
}
int blackBox(vector<vector<int>> mat,int x){
int cnt=0;
int n=mat.size();
for(int i=0;i<n;i++){
        cnt+=upperBound(mat[i],x);
    }
    return cnt;
}

int median(vector<vector<int>> &mat){
int n=mat.size();
int m=mat[0].size();
int low=findMinMaxIndex(mat, n, m, m)[2];
int high=findMinMaxIndex(mat, n, m, m)[3];
while(low<=high){
int mid=(low+high)/2;
int smallerEquals=smallerEquals(mat,mid);
int req=n*m/2;
if(smallerEquals<=req){
      low=mid+1;  
        }
else high=mid-1;
    }
    return low;
}
int main(){
    vector<int<int> a={[1,2,4],[5,6,7]};
    median(a)
}
