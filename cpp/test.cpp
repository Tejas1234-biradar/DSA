#include <iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    public: person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void displayinfo(){
        cout<<"Name:\t"<<name<<endl;
        cout<<"Age:\t"<<age<<endl;
    }
};
class student:public person{
    public:
    int rollNo;
    private:
    float marks;
    public:
    student(string name,int age,int rollNo,float marks):person(name,age)
    {
        this->rollNo=rollNo;
        this->marks=marks;
    }
    void displayinfo(){
        person::displayinfo();
        cout<<"Roll Number:\t"<<rollNo<<endl;
        
        
    }
    void getMarks(){
        cout<<"Marks:\t"<<marks<<endl;
    }
};

int main() {
    student Tejas("Tejas",18,20,93.2);
    Tejas.displayinfo();
    Tejas.getMarks();
    return 0;
}