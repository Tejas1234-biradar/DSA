#include<iostream>:
#include<set>
#include<unordered_map>
#include<vector>
using namespace std;
vector<vector<int>> threeSum(vector<int> a){
    vector<vector<int>> ans;
    int n=a.size();
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(i>0&&a[i]==a[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=a[i]+a[j]+a[k];
            if(sum<0){
                j++;
            }
            else if(sum==0){
            vector<int> temp={a[i],[j],a[k]};
            ans.push_back(temp);
                j++;
                k--;
            }
            else 
                k--;
        }
    }
    return ans;
}
vector<vector int>> fourSum(vector<int> a){
    set<vector<int>> st;
    int n= a.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                long long sum=a[i]+a[j]
                        sum+=a[k];
                        sum+=a[l];
                    if(sum==0){
                        vector<int> temp={a[i],a[k],a[l],a[j]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);

                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin,st,end);
    return ans;
}
/* breute force complexity of O(n*n*n)
int longestSubarrayK(vector<int> a){
    int n=a.size();
    int res=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        for(int k=i;k<j;k++){
                res=0;
                res=res^a[k];
                if(res==k) cnt++;
            }    
        }
        return cnt;
    }
}*/ 
int maximumSubarrayXor(vector<int> a,int k){
    int n=a.size();
    int res=0;
    int maxLen=0;
    unordered_map<int, int> prefixXor;
    for(int i=0;i<n;i++){
    res^=a[i];
    if(res==k) maxLen=i+1;
    if(prefixXor.find(res^k)!=prefixXor.end()){
            maxLen=max(maxLen,i-prefixXor[res^k]);
        }
 if(prefixXor.find(res^k)==prefixXor.end())   prefixXor[res]=i;
    }
return maxLen;
}
vector<int> missingandRepeating(vector<int> a){
    int n=a.size();
    long long S=(n*(n+1))/2;
    long long S2=(n*(n+1)*(2*n+1))/6;
    long long Sn=0;
    long long S2n=0;
    for(int i=0;i<n;i++){
        Sn+=a[i];
        S2n+=a[i]*a[i];

    }
    long long val1=S-Sn;//x-y
    long long val2=S2-S2n;
    val2=val2/val1;//x+y
    long long x=(val1+val2)/2;
    long long y=x-val1;
    return {(int)x,(int)y};

}
//brute force O(n^2) TC
/*int countInversions(vector<int> a){
    int  cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) cnt+=1;
        }
    }
    return cnt;
}*/ 
//A bit more optimal
int countInversions(vector<int> a){
     
}
