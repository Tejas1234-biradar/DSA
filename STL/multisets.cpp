#include <iostream>
#include <set>
using namespace std;
int main() {
    multiset<int> ms={1,2,3,4,5};
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(1);
    ms.insert(5);
    ms.insert(4);
    ms.erase(4);   
    while(ms.find(2)!=ms.end()){
        ms.erase(2);
    }
    for(auto val:ms){
        cout<<val<<endl;
    }  
    return 0;
}