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

void insert_at_tail(Node* &head, Node* &tail, int val) //cz value insert krsi, head & tail change hote pare tai reference use krbo
{
    Node* newnode = new Node(val); // ekhn newnode er age o pore NULL ache
    if(head == NULL) //linked list faka hole
    {
        head = newnode;
        tail = newnode;
        return; // return na krle ekhan theke error chole ashte pare
    }
    // so connection krte hbe
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
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

    insert_at_tail(head,tail,100);
    insert_at_tail(head,tail,200);
    print_forward(head);
    return 0;
}