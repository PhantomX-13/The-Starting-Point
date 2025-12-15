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

void insert_at_any_pos(Node* head,int idx, int val)
{
    Node* newnode = new Node(val); // ekhn newnode er age o pore NULL ache
    Node* tmp = head; //temporary node head theke shuru hbe
    for(int i=0;i<idx-1; i++)
    {
        tmp = tmp->next; //loop er moddhe tmp samne egiye dibo
    }
    //connection krte hbe ebr (this is very very important)
    newnode->next = tmp->next; //newnode er next, tmp er next e rekhe dilam
    tmp->next->prev = newnode; //tmp.next er previous e newnode rekhe dilm
    tmp->next = newnode;
    newnode->prev = tmp; // newnode er previous e tmp rekhe dibo
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

    insert_at_any_pos(head,2,100);
     insert_at_any_pos(head,1,500);
    print_forward(head);
    return 0;
}