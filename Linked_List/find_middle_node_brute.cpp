#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Node class represents a node in a linked list
class Node {
public:

    // Data stored in the node
    int data;  
    
     // Pointer to the next node in the list
    Node* next;     

    // Constructor with both data
    // and next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as
    // a parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};



Node* findMiddle(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    int count = 0;
    Node* temp = head;
    while(temp->next!=nullptr){
        count++;
        temp=temp->next;
    }
    int mid = count/2 + 1;
    temp=head;
    while(temp!=nullptr){
        mid = mid-1;
        if(mid==0) break;
        temp=temp->next;
    }
    return temp;
}



int main() {
    // Creating a sample linked list: 
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Find the middle node
    Node* middleNode = findMiddle(head);

    // Display the value of the middle node
    cout << "The middle node value is: " << middleNode->data << endl;

    return 0;
}
