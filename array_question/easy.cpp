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
}

    

int main(){
    int arr[]={12,44,51,1,200,9999,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    largestNumber(arr,size);
    secondLargestNumber(arr,size);
    isSorted(arr,size);
    cout<<duplicateElements(arr,size)<<endl;
}
