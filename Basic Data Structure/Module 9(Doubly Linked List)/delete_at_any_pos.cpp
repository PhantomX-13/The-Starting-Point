#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Node
{
    public: 
    int val;
    Node* next;
    Node* prev;


  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void print_forward(Node* head)
{
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delete_at_any_pos(Node* head, int idx)
{
    Node* tmp = head;
    for(int i=1; i<idx; i++){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next; // delete node er next , tmp.next e rakhbo
    tmp->next->prev = tmp; // visualize krte hbe

    delete deleteNode;

}
int main()
{
    Node* head = new Node(10); //node class er constructor call krsi
    Node* a = new Node(20);  
    Node* tail = new Node(30);
    
    head->next = a; 
    a->prev = head; 

    a->next = tail;    
    tail->prev = a; 

    delete_at_any_pos(head, 1);
    print_forward(head);
    return 0;
}