#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// TODO: implement here
void push_back(Node* &head, int val) {
    //TODO
}

// L1:  3 -> 5 -> 7 -> null    O(n)
//                      t1          
// L2:  4 -> 5 -> 6 ->10 -> 15 -> null     O(m)
//                                t2
// opcion1
// L3:  3 -> 4 -> 5 ->5 -> 6 -> 7 -> 10 -> 15 ->     O(n + m)
//      L3                                 t3
//opcion2
// L3:  15 -> 10 -> 7-> 6-> 5-> 5-> 4-> 3->  O(1)
// revert(L3)  O(n+m)      
// L3:  3 -> 4 -> 5 ->5 -> 6 -> 7 -> 10 -> 15 ->
// return L3


Node* SortedMerge(Node* l1, Node* l2) {//O(n + m)
   //TODO
   throw ("Falta implementar");
}

void display(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
