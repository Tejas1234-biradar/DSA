#include <iostream>
#include<string>
#include<stack>
using namespace std;
bool isValid(string s){
    stack<char> st;
    for(char ch:s){
        if(ch=='('||ch=='['||ch=='{'){
            st.push(ch);
        }
        else{
            if(st.empty()) return false;
            char top = st.top();if((ch==')' && top=='(') || 
            (ch==']' && top=='[') || 
            (ch=='}' && top=='{')){if((ch==')'&&top=='(')||(ch==']'&&ch=='[')||(ch=='}'&&ch=='{')){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.empty();
}
int main() {
    string s;
    cout<<"ENter the bracket string";
    cin>>s;
    isValid(s)?cout<<"Valid\n":cout<<"invalid\n";
    return 0;
}