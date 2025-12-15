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

void insert_at_head(Node* &head, int val)
{
    //1.notun node create kora
    Node* newnode = new Node(val);
    //2.connection kora 
    newnode->next = head;
    //3.head update krte hbe
    head = newnode;
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
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_head(head,100);
    print_linked_list(head);
    return 0;
}
