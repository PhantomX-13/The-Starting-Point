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

void print_backward(Node* tail)
{
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10); //node class er constructor call krsi
    Node* a = new Node(20);  
    Node* tail = new Node(30);
    
    //build doubly connection
    head->next = a; //B6
    a->prev = head; //3A

    a->next = tail;    //D2
    tail->prev = a; //B6

    print_forward(head);
    print_backward(tail);
    return 0;
}

/* 
--------   --------  --------
|N|10|N|   |N|20|N|  |N|30|N|
--------   --------  --------
   3A         B6        D2
  head        a        tail
*/