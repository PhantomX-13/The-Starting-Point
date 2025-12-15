#include <iostream>
using namespace std;
class Node
{
    public: 
    int val;
    Node* next;

  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void insert_at_tail(Node* &head, Node* &tail,int val) //o(1)
{
    //1.notun node create kora
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    Node* tem = head;
    while(tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newnode;
    tail = tail->next;
}

void print_linked_list(Node* head)
{
  Node* tem = head;
  while(tem != NULL)
  {
    cout << tem->val << endl;
    tem = tem->next;
  }
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;;

    insert_at_tail(head,tail,40);
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,60);
    print_linked_list(head);
    cout << "Tail : " << tail->val << endl;
    return 0;
}

//10 20 30 silo , pore 40 insert koresi