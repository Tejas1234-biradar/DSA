#include<stack>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> v={4,5,25,1};
    stack<int> st;
    int n=v.size();
    vector<int> nge(n,-1);//each element in vector is -1 and vecetor has n elements;
    for (int i = n - 1; i >= 0; i--)
    {
        int current=v[i];//starting from right to left
        while(!st.empty()&&current<=st.top()){
            st.pop();//we pop the top untill top>current
        }
        if(!st.empty()){
            nge[i]=st.top();//the remaining value in stack is the greater riht number;
        }
        st.push(current);
    }
    for(int i = 0; i < n; i++) {
        cout << v[i] << " --> " << nge[i] << endl;
    }
    
   
}