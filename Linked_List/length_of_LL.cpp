#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

int lengthofLL(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != nullptr){
        temp = temp->next;
        count++;
    }
    return count;
} 

int main(){
    vector<int> arr = {2,5,7,8};
    
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    
    
    cout<<lengthofLL(head);
    
}