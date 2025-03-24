#include <iostream>
#include <map>
#include<sstream>
#include<vector>
using namespace std;

int main() {
    vector<int> Marks;
    vector<string> names;
    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        cout<<"Enter the name of students"<<i+1<<":"<<endl;
        cin>>name;
        names.push_back(name);

    }
    for(int i=0;i<n;i++){
        int mark;
        cout<<"ENter the mark of"<<names[i]<<":"<<endl;
        cin>>mark;
        Marks.push_back(mark);

    }
    map<string,int> marks;
    for(int i=0;i<n;i++){
        marks[names[i]]=Marks[i];
    }
    for (auto pair:marks){
        cout<<pair.first<<"=>"<<pair.second<<endl;
    }
    
    return 0;

}
   