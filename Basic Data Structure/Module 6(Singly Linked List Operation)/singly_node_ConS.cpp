#include <iostream>
using namespace std;

class Node
{
    public: 
    int val; //kon type er val
    Node* next;  // tar next node er address

  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void print_linked_list(Node* head) //linked list head theke suru hy, so parameter e head k rcv krte pari
{
    Node* temp = head; //initially head store thakbe

    while(temp != NULL){
        cout << temp->val << endl;
        //after printing next index e chole jbo
        temp = temp->next;

    }
}
int main()
{
    Node *head; // head e always 1st ghor er track rkhle linked list track rakhte prbo

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    head = a; //1st ghor,  head a dhore kaj krtesi

    a->next = b;
    b->next = c;

    print_linked_list(head);
    return 0;
}
