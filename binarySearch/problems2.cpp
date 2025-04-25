#include <algorithm>
#include <climits>
#include <cmath>
#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
//findinf sqaure root using brute force
int sqrroot(int n){
    int ans=1;
    for(int i=0;i<=n;i++){
        if(i*i<=n){
            ans=i;
        }
        else break;
    }
    return ans;
}
int binarysqroot(int n){
int low=1;
int high=n;
int ans=1;
while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid>n){
            high=mid-1;
        }
        if((long long)mid*mid<=n){
            ans=mid;
            low=mid+1;
        }
        
    }
    return ans;
}
int product(int n,int a){
    int result=1;
    for(int i=0;i<a;i++){
    result=result*n;   
    }
    return result;
}
int nthRoot(int x,int n){
for(int i=0;i<n;i++){
        if(product(i,x)==n) return i;
        else if(product(i,x)>n) break;
    }
    return -1;
}
int binarynthRoot(int base,int exp){
    int low=0;
    int high=base;
    while(low<=high){
    int mid=(low+high)/2;
    long long midPower=(long long)product(mid,exp); 
    if(midPower==base) return mid;
    else if(midPower>base) high=mid-1;
    else low=mid+1;
    }
    return -1;
}
int totalHours(vector<int> a,int hourly){
    int ans=0;
    for(int x:a){
        ans+=(x+hourly-1)/hourly;
    }
    return ans;
}
int kokoBitch(vector<int> a,int h){
    for(int i=1; i<=*max_element(a.begin(),a.end());i++){
        int reqTime=totalHours(a, i);
        if(reqTime<=h){
            return i;
        }
        return -1;
    }
}
int binarykokogyaru(vector<int> a, int h) {
    int low = 1;
    int high = *max_element(a.begin(), a.end());
    int ans = high; // Initialize with the maximum eating speed
    
    while (low <= high) {
        int mid = (low + high) / 2;
        int totalTime = totalHours(a, mid); // Calculate total hours required
        
        if (totalTime <= h) { // If the current speed can finish within the time
            ans = mid; // Update the answer with the current speed
            high = mid - 1; // Try for a smaller eating speed
        } else {
            low = mid + 1; // Try for a larger eating speed
        }
    }
    
    return ans;
}
bool bloomCheck(int day,int minDay){
    if(day%minDay==0) return true;
    return false;
}
int minDaystoMbouqets(vector<int> a,int m,int k){
    
    int minDay=0;
    for(int i=0;i<a.size();i++){
        int cnt=0;
        for(int j=1;j<k;j++){   
        if(bloomCheck(a[j], j))cnt++;
        else if(cnt ==m){
                minDay=j;
                break;
            }
        }
    }
    return minDay;
}
bool capacityCheck(vector<int> a,int capacity,int days){
    int sum=0;
    int dayTaken=1;
    for(int i=0;i<a.size();i++){
        if(sum+a[i]>capacity){
            dayTaken++;
            sum=a[i];
        }
        else sum+=a[i];
        }
    return dayTaken<=days;
}
bool divCheck(vector<int> a,int divisor,int k){
    int ans=0;
    for(int i=0;i<a.size();i++){
        ans+=ceil((double)a[i]/divisor);
    }
    return ans<=k;
}
int smallestDivisor(vector<int> a,int k){
    int low=1;
    int high=*max_element(a.begin(),a.end());
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(divCheck(a, mid, k)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int shipWithDays(vector<int> a,int days){
    int low=*max_element(a.begin(),a.end());
    int sum=0;
    for(int i=0;i<=a.size();i++){
        sum+=a[i];
    }
    int high = sum;
    while(low<=high){
        int mid=(low+high)/2;
        if(capacityCheck(a,mid,days)){
            high=mid-1;

        }
        else low=mid+1;
    }
    return low;
}
int KthMissingNumber(vector<int> a,int k){
int low=0;
int high=a.size()-1;
while(low<=high){
        int mid=(low+high)/2;
        int missing=a[mid]-(mid+1);
        if(missing<k) low=mid+1;
        else high=mid-1;// our answer should hsve beem a[high]+more=a[high]+(k-missing)=a[high]+ k-a[high] +high+1=high+1+k=low+k since low is at the high+1
    }
    return low+k;
}
bool canWePlaceGirls(vector<int>a,int minDist,int girls){
    int last=a[0];
    int girlNum=1;
    for(int i=0;i<a.size();i++){
        if(a[i]-last>=minDist){
            girlNum++;
            last=a[i];
        }
    }
return girlNum>=girls;
}
int aggresiveGirls(vector<int>a,int girls){
int low=0;
int ans=0;
int high=(*max_element(a.begin(),a.end())-*min_element(a.begin(),a.end()));
while(low<=high){
        int mid=(low+high)/2;
        if(canWePlaceGirls(a, mid, girls)){
        ans=mid;
        low=mid+1;
        }
        else high=mid-1;
    }    
    return ans;
}   
int canWeAllocate(vector<int> a,int maxPages){
int last=a[0];
int studentNum=1;
int sum=0;
for(int i=0;i<a.size();i++){
        if(sum+a[i]>maxPages)//i cant do a[i]>=last like the aggresive ccows here since in this question there is a condition of atleast so if it is possible to allocate three books we have to allocate
        {
            studentNum++;
            sum=a[i];//maybe i will use a sum variable to keep track of thallocations rather than single
        }
        else sum+=a[i];
    }
    return studentNum;
}
int allocateBooks(vector<int> a,int m ){
    if(m>a.size()) return -1;
     int low=*max_element(a.begin(),a.end());
    int ans=-1;
    int sum=0;
    for(auto x:a){
    sum+=x;
    }
    int high=sum;  // i dont know what the high will continuing the strivers video
    while(low<=high){
        int mid=(low+high)/2;
        int students=canWeAllocate(a, mid);
        if(students>m){
         low=mid+1;
        }
        else high=mid-1;
        
    }
    return low;
}
int minGas(vector<int> a,int noOfGases){
int n=a.size();
vector<int> howMany[n-1]={0};
    for(int i=0;i<noOfGases;i++){
    int maxVal=-1; 
    int maxInd=-1;
    for(i=0;i<=a.size();i++){
            int diff=a[i+1]-a[i]:
            int sectLength=diff/(howMany[i]+1);
            if(maxVal<sectLength){
                maxVal=sectLength;
                maxInd=i;
            }
            howMany[maxInd]++; 
        }
        
    }
    for(int i=0;i<a.size();i++){
        int sectLength=(a[i+1]-a[i])/h 
    }
}
int countOfGasStations(long double minDist,vector<int> a){
    int cnt=0; //Initialize count to zero 
    for(int i=0;i<a.size();i++){
        int numberInBet=(int)(a[i]-a[i-1])/minDist;
        if((a[i]-a[i-1]/minDist)== numberInBet*minDist){
            numberInBet--;//we check if we can add the gas stations in the sector
        }
        cnt+=numberInBet;
    }
    return cnt;
}
long double minimiseMaxDistance(vector<int> a,int k){
    long double low=0;
    long double high=0;
    for(int i=0;i<a.size()-1;i++){
        high=max(high,(long double)(a[i+1]-a[1]));

    }
    long double diff=1e-6;
    while(high-low>diff){
        long double mid=(low+high)/2.0;
        int cnt=countOfGasStations(mid,  a);
        if(cnt>k){
        low=mid;//we dont do -1 cuz too muh difference
        }
        else high=mid;
    }
    return high;
}
/*int medianof2sortedArrays(vector<int> a,vector<int>b){
    int ptr1=0;
    int ptr2=0;
    int median=0;
    vector<int> sorted;
    while(ptr1<=a.size()&&ptr2<=b.size()){
        if(a[ptr1]<=b[ptr2]){
        sorted.push_back(a[ptr1]);
        ptr1++;
        }//a[i]<b[i]
        else{
            sorted.push_back(b[ptr2]);
            ptr2++;
        }
    }
    while(ptr1< a.size()){
        sorted.push_back(a[ptr1]);
    }
    while(ptr2<b.size()){
        sorted.push_back(b[ptr2]);
    }
    if(sorted.size()%2==0){
        int even_1=(sorted.size()/2)-1;
        int even_2=(sorted.size()/2);
        median=(even_1+even_2)/2;
    }
    else median = sorted.size()/2;
return sorted[median];
}*/
//optimizid approach where we simulate merging of two arrays just to find the median
/*int median(vector<int> a,vector<int> b){
int n1=a.size();
int n2=b.size();
int n=n1+n2;
int ind1=n/2;
int ind2=n/2-1;
int indEle1=-1;
int indEle2=-1;
int ptr1=0;
int ptr2=0;
int cnt=0;

while(ptr1<n1&&ptr2<n2){
    if(a[ptr1]<b[ptr2]){
        if(cnt==ind1) a[ptr1]=indEle1;
        if(cnt==ind2) a[ptr1]==indEle2;
        cnt++;
        ptr1++;
        }
    else{
        if(cnt==ind1)b[ptr2]==indEle1;
        if(cnt==ind2)b[ptr2]==indEle2;
        cnt++;
        ptr2++;
        }
    }
while(ptr1<n1){
     if(cnt==ind1) a[ptr1]=indEle1;
    if(cnt==ind2) a[ptr1]==indEle2;
    cnt++;
    ptr1++;
    }
while(ptr2<n2){
        if(cnt==ind1) b[ptr2]=indEle1;
        if(cnt==ind2) b[ptr2]==indEle2;
        cnt++;
        ptr2++;

    }
if(n%2==1){
        return indEle2;
    }
return ((double)indEle1+(double)indEle2)/2;

}*/
bool validityCheck(vector<int>a ,vector<int>b,int possibleMedian){
    //since both arrays are sorted i will directly check ?
    if(a[possibleMedian]<a[possibleMedian+1]&&b[b.size()-possibleMedian]<b[b.size()-(possibleMedian+1)])return true;
    return false;
}
double median(vector<int> a, vector<int> b){
    int low=0;
    int n1=a.size();
    int n2=b.size();
    if(n1>n2) return median(b, a);
    int n=n1+n2;
    int high=n1;
    int left=(n1+n2+1)/2;//whats this for the left side of array
    while(low<=high){
    int mid1=(low+high/2);
    int mid2=left-mid1;
     int l1=INT_MIN;
    int l2=INT_MIN;
    int r1=INT_MAX;
    int r2=INT_MAX;
    if(mid1<n1) r1=a[mid1];
    if(mid2<n2) r2=b[mid2];
    if(mid1-1>=0) l1=a[mid1-1];
    if(mid2-1>=0) l2=b[mid2-1];
    if(l1<=r2&&l2<=r1){
            if(n%2==1){
                return (double)max(l1,l2);
            }
            else{
            return (( double)max(l1,l2)+( double)min(r1,r2))/2.0;
        }
    }
    else if(l1>r2) high=mid1-1;
    else low=mid1+1;

    //we understood that we are running bs on whats the number of array elements to pick from arr1  one possiblity is picking 0 and another is all the mid is the current number of elemetns taken and since the aray is sorted we chec
        // a[mid]<a[mid+1] edge cases baby :[ and b[b.size()-mid]<b[b.size()] we write a boolean to check this condition;
        //once we find the correct way to partition the array our answers will be (a[mid]+a[mid+1])/2if even and a[mid] if odd
    }
    return 0.0;
}
int KthElement(vector<int> a,vector<int>b,int k){

    int n1=a.size();
    int n2=b.size();
    int low=max(0,k-n2);
    if(n1>n2) return median(b, a);
    int n=n1+n2;
    int high=min(n1,k);
    int left=k;//whats this for the left side of array
    while(low<=high){
    int mid1=(low+high/2);
    int mid2=left-mid1;
     int l1=INT_MIN;
    int l2=INT_MIN;
    int r1=INT_MAX;
    int r2=INT_MAX;
    if(mid1<n1) r1=a[mid1];
    if(mid2<n2) r2=b[mid2];
    if(mid1-1>=0) l1=a[mid1-1];
    if(mid2-1>=0) l2=b[mid2-1];
    if(l1<=r2&&l2<=r1){
        return max(l1,l2);    
        }
    else if(l1>r2) high=mid1-1;
    else low=mid1+1;

    //we understood that we are running bs on whats the number of array elements to pick from arr1  one possiblity is picking 0 and another is all the mid is the current number of elemetns taken and since the aray is sorted we chec
        // a[mid]<a[mid+1] edge cases baby :[ and b[b.size()-mid]<b[b.size()] we write a boolean to check this condition;
        //once we find the correct way to partition the array our answers will be (a[mid]+a[mid+1])/2if even and a[mid] if odd
    }
    return 0.0;
}
int main(){
    cout<<sqrroot(25)<<" ";
    cout<<binarysqroot(25)<<" "; 
    cout<<product(2, 5);
 vector<int> stalls = {1, 2, 4, 8, 9}; // The positions of the cows
    int girls = 3; // Number of girls to place

    int result = aggresiveGirls(stalls, girls);
    cout << "The largest minimum distance is: " << result << endl;
 cout << "Square root of 25: " << binarynthRoot(25, 2) << endl;  // Should return 5
    cout << "Cube root of 27: " << binarynthRoot(27, 3) << endl;    // Should return 3
    cout << "Cube root of 16: " << binarynthRoot(16, 3) << endl;    // Should return 0 (no perfect cube root)
}
