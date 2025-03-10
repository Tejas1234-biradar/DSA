#include<iostream>
#include<string>
using namespace std;
int add(int x,int y){
    return x+y;
}
class Employee{
    public:
    string name;
    int salary; 
    Employee(string name,int salary)
    {
        this->name=name;
        this->salary=salary;
    }
    void printDetails()
    {
        cout<<"The name is\t"<<this->name<<endl;
    }  
};
int main(){
    int a;
    // cout<<"Hello world"<<endl;
    // cout<<"write you marks"<<endl;
    // cin>>a;
    // cout<<a;
    // if(a>150||a<1){
    //     cout<<"INvalid age\n";
    // }
    // else if(a>=18){
    //     cout<<"pefect\n";
    // }
    string name="Tejas";
    cout<<"The name is"<<name.substr(1,4);
    // cout<<(float)a;
    Employee har("constructor",355);
    // har.name="harry";ṇ
    // har.salary=100;
    cout<<"The name of our first employee is"<<har.name<<endl;
    

}