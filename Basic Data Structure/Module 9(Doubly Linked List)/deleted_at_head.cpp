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

void delete_at_head(Node* &head,Node* &tail)//head or tail onk case e NULL e jete pare so reference
{
    Node* deleteNode = head;
    head = head->next; // dlt krte head k head.next e niye jete hbe
    delete deleteNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL; // head er prev always NULL thake, tai prev address rmv kore NUll kore dibo

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

    delete_at_head(head,tail);
    print_forward(head);
    return 0;
}