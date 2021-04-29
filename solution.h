#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// TODO: implement here
void push_front(Node* &head, int val) {
    Node* nodo = new Node();
    nodo->data = val;
    nodo->next = head;
    head = nodo;
}

void push_back(Node* &head, int val) {
    //TODO
}

Node* reverse(Node* head) {
    Node* rev = nullptr;
    //TODO
    return rev;
}

// L1:  3 -> 5 -> 7 -> null
//      t1
// L2:  4 -> 5 -> 6 ->10 -> 15 -> null
//      t2
// L3:  15 -> 10 -> 7 -> 6 -> 5 -> 5 -> 4 -> 3 
Node* SortedMergeSeq(Node* l1, Node* l2) {
    Node* l3 = nullptr;
    //TODO
    return l3;
}

Node* SortedMergeRec(Node* l1, Node* l2) {
    return nullptr;   
}

void display(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}