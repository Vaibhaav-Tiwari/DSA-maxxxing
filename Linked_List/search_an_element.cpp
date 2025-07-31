#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int checkifPresent(Node* head, int desiredElement){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == desiredElement) return 1;
        temp = temp->next;
        
    }
    return 0;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    int val = 5;
    cout<<checkifPresent(head, val);
    return 0;
}