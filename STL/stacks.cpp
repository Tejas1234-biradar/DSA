#include <iostream>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {
    queue<int> q;
    deque<int> dq;
    stack<int> st;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);

    cout << "Front: " << dq.front() << endl; // 2
    cout << "Back: " << dq.back() << endl; // 3

    dq.pop_front(); // removes 2

    cout << "Front after pop_front: " << dq.front() << endl; // 1

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;//shows the first element
    cout<<q.back()<<endl;//shows the last element
    q.pop();//removes from front
    cout<<q.front()<<endl;
    st.push(19);
    st.push(12);
    st.push(11);
    st.push(13);
    st.push(15);
    st.push(19);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;//its opposite oh right like pancakes last in first out
    cout<<st.size()<<endl;
    if(st.empty()){
        cout<<"Stacck is empy\n";
    }
    return 0;
}