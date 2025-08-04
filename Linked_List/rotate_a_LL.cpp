#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int num;
        node* next;
        node(int a) {
            num = a;
            next = NULL;
        }
};


void insertNode(node* &head, int val){
    node* newNode= new node(val);
    if(head==nullptr){
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next != nullptr) temp =temp->next;
    temp->next = newNode;
    return;
}

node* rotateRight(node* head, int k){
    if(head==nullptr || head->next==nullptr) return head;
    node* temp = head;
    int length = 1;
    while(temp->next != nullptr){
        ++length;
        temp = temp->next;
    }
    temp->next = head;
    k = k%length;
    int end = length - k;
    while(end--) temp = temp->next;
    head = temp->next;
    temp->next = nullptr;
    return head;
}









//utility function to print list
void printList(node* head) {
    while(head->next != NULL) {
        cout<<head->num<<"->";
        head = head->next;
    } 
    cout<<head->num<<endl;
    return;
}

int main() {
    node* head = NULL;
    //inserting Node
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    
    cout<<"Original list: ";
    printList(head);
    
    int k = 2;
    node* newHead = rotateRight(head,k);//calling function for rotating right of the nodes by k times
    
    cout<<"After "<<k<<" iterations: ";
    printList(newHead);//list after rotating nodes
    return 0;
}