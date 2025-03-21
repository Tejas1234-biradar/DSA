#include<iostream>
#include<set>
using namespace std;
void largestNumber(int arr[],int size){
    int max=arr[0];
    for (int i = 0; i < size; i++) {
        if(arr[i]>max) max=arr[i];
            
    }
    cout<<"The largestNumber in array is ->"<<max<<endl;
}
void secondLargestNumber(int arr[],int size){
        int first=arr[0];
        int second=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    if(second==arr[0]){cout<<"no second largest elelemt"<<endl;}
    else{
    cout<<"the second largest number is ->"<<second<<endl;
    }
}
//void isSorted(int arr[],int size){
  //  int i =0;
//        while(arr[i]<arr[i+1]&&i<=size-1]){
//            i++;//do nothing condition for ascending sort 
  //          if(i==size){
//                cout<<"The array is sorted in an ascending order";
//              return;
 //           }
//        }
//        while(arr[i]>arr[i+1]&&i<=size){
//            i++;//do nothing still;
//            if(i==size){
 //               cout<<"The array is sorted in descedning order";
//                return;
//            }
//
//        }
//        cout<<"The loop is not sorted"<<endl;
//        return ;       //if all the loop fails return here we use functions to kill the code before executing further
//    }
void isSorted(int arr[],int size){
    bool ascending=true;
    bool descending=true;
    for (int i = 0; i < size; i++) {
            if(arr[i]<arr[i+1]) descending=false;
            if(arr[i]>arr[i+1]) ascending=false;
    }
    if(ascending){
        cout<<"array is sorted and is ascendinge"<<endl;
    }
    else if(descending){
        cout<<"The array is sorted and is descedning"<<endl;
    }
    else {
        cout<<"not sorted"<<endl;
    }


}//Brute force
//int duplicateElements(int &arr[],int size){
  //  set<int> st;
//for(int i=0;i<size-1;i++){
//      int min=i;
//      for(int j=i+1;j<size;j++){
//          if(min<arr[j]) {
//                min=j;
//            }
//        }
//        swap(arr[min],arr[i]);
//    }
//    for(int i=0;i<size;i++){
//        st.insert(arr[i]);
//
//    }
//    int index=0;
//    for(auto it:st){
//        arr[index]=it;
//        index++;
//    }
//    
//}
//Better approach
//int duplicateElements(int &arr[],int size){
//    set<int> st;
//    for(int i=0;i<size;i++){
//        set.insert(arr[i]);
//    }
//    int index=0;
//    for(auto it:st){
//        st[index++]=it;
//    }
//    return index//this should return number of unique elements in a sorted array
//}
//Optimal approach (two pointers)

int duplicateElements(int arr[], int size) {
    if (size == 0) return 0;

    int i = 0; // Points to the last unique element found
    for (int j = 1; j < size; j++) { // j starts from 1 because i is already at index 0
        if (arr[j] != arr[i]) { // New unique element found
            i++; // Move the unique index forward
            arr[i] = arr[j]; // Update it with the new unique element
        }
    }

    return i + 1; // Number of unique elements in the sorted array
}//brute forceO(n^2)
//void rotateLeftbyonePlace(int &arr[],int size){
//    for (int i = size - 1; i >=0; i--) {
//        swap(arr[i],arr[i-1]);//wrong approach less optimal 
//    }
//}
//optimal O(n)
void rotateLeftbyonePlace(int arr[], int size){
    int temp=arr[0];
    for(int i=0;i<size-1;i++){//i<size-1 should be the same thing ya? nope its different i<size-1 runs till size-2 and i<=runs till size
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//void rotateByKplaces(int arr[],int k,int size){
//    if(size==0)return;
//    k=k%size;
//    for(int rotation=0;rotation<k;rotation++){
//        int temp=arr[0];
//        //we rotate for each iterations? ig nope still not clicking .
//        for(int i=0;i<size-1;i++){
//            arr[i]=arr[i+1];//try a dry run taking rotation =0 we rotated everything once then second time then k times ohhh so we keep rotating k times but does that shift the element by k places such a huge workaround
//        }
//        arr[size-1]=temp;
//    }
//
//}
//optimal solution two pointer approach
void reverse(int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void rotateByKplaces(int arr[],int k,int size){
    if(k==0||size==0) return;//k=2;
    k=k%size;//arr[2,5,6,7,9] expected answer arr[6,7,9,2,5]
    reverse(arr,0,k-1);//here we reverse from 0 to k-1 //from index 0 to 1 so arr[5,2,6,7,9]
    reverse(arr,k,size-1);//here from index 2 to size-1 so arr[5,2,9,7,6]
    reverse(arr,0,size-1);//here from 0 to size -1 arr[6,7,9,2,5]
}
//brute force 
void moveZeroestoEnd(int arr[],int size){
    //they didnt say anything about maintaing the order so we just dont
     int cnt=0;
    int i=0;
while(i<size-cnt){
        if(arr[i]==0){
        swap(arr[i],arr[size-cnt-1]);
        cnt++;
        }
        else{
            i++;//only increase i after checking its not a moveZeroestoEnd
        }
    }
for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

    

int main(){
    int arr[]={12,44,51,1,200,9999,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    largestNumber(arr,size);
    secondLargestNumber(arr,size);
    isSorted(arr,size);
    cout<<duplicateElements(arr,size)<<endl;
    rotateLeftbyonePlace(arr,size);
}   
