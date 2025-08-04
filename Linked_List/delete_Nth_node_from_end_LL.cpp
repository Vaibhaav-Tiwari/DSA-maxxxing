#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor 
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to print the linked list
void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}


Node* DeleteNthNodefromEnd(Node* head, int N){
    Node* fast = head;
    Node* slow = head;
    for(int i =0; i<N; i++) fast =fast->next;
    if(fast==nullptr) return head->next; 
    while(fast->next != nullptr){
        slow = slow->next;
        fast = fast->next;
    }
    Node* delNode =slow->next;
    slow->next = slow->next->next;
    delete delNode;
    return head;
}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int N = 3;
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head->next->next->next->next = new Node(arr[4]);

    // Delete the Nth node from the end 
    // and print the modified linked list
    head = DeleteNthNodefromEnd(head, N);
    printLL(head);
}
