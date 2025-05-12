#include <cstddef>
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;

public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArraytoLL(vector<int> &a){
    Node* head = new Node(a[0]);
    Node* mover = head;
    for (int i = 1; i < a.size(); i++) {
        Node* temp = new Node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lenghtofLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

bool search(Node* head, int val){
    Node* temp = head;
    while (temp) {
        if (temp->data == val) return true;
        temp = temp->next;
    }
    return false;
}
Node* removesHead(Node* head){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
void print(Node* head){
   
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* deleteTail(Node* head){
    Node* temp=head;
    while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    
    return head;
}
Node* deleteKthElement(Node*head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node*temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt ++;
        if(cnt==k){
            prev->next=prev->next->next;  
            free(temp);
            break;
        }
        prev=temp;//mark the previous 
        temp=temp->next;//move to nxt and remember the prev that is use a variable
    }

    return head;
}
Node* deleteElement(Node*head,int el){
    if(head==NULL) return head;
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node*temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt ++;
        if(temp->data==el){
            prev->next=prev->next->next;  
            free(temp);
            break;
        }
        prev=temp;//mark the previous 
        temp=temp->next;//move to nxt and remember the prev that is use a variable
    }

    return head;
}
Node* insertatHead(Node*head,int val){
    Node*temp=new Node(val);
    temp->next=head;
    return temp;
}
Node* insertTail(Node*head,int val){
    if(head==NULL) return new Node(val);
    Node*temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}
Node* insertAtKthELement(Node* head,int val,int k){
    if(head==NULL)return new Node(val);
    if(k==1){
        Node*temp=new Node(val);
        temp->next=head;
        return temp;
    }
    int cnt=0; Node*temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
        Node* x=new Node(val);
        x->next=temp->next;//connect the new node at node to next to previous before breaking the Linked
        temp->next=x;
        break;
        }
        temp=temp->next;
    }
return head;
}

Node* insertatValue(Node* head,int el,int val){
    if(head==NULL)return NULL;
    if(head->data==val){
        Node*temp=new Node(val);
        temp->next=head;
        return temp;
    }
    int cnt=0; Node*temp=head;
    while(temp->next!=NULL){
        cnt++;
        if(temp->next->data==val){
        Node* x=new Node(val);
        x->next=temp->next;//connect the new node at node to next to previous before breaking the Linked
        temp->next=x;
        break;
        }
        temp=temp->next;
    }
return head;
}


int main(){
    vector<int> arr = {1, 2, 43, 5, 6};
    Node* head = convertArraytoLL(arr);

    cout << "Length of Linked List: " << lenghtofLL(head) << endl;
    //head=removesHead(head);
    head=insertatValue(head,2,5);
    print(head);


    if (search(head, 2)) {
        cout << "Found 2 in the list!" << endl;
    } else {
        cout << "2 not found in the list!" << endl;
    }

    if (search(head, 200)) {
        cout << "Found 200 in the list!" << endl;
    } else {
        cout << "200 not found in the list!" << endl;
    }

    return 0;
}
