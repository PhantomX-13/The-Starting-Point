#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

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

void insert_at_tail(Node* &head, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
      head = newnode;
      return;
    }
    Node* tem = head;
    while(tem != NULL)
    {
        tem = tem->next;
    }
    tem->next = newnode;
}

void print_linked_list(Node* head)
{
  Node* tem = head;
  while(tem->next != NULL)
  {
    cout << tem->val << endl;
    tem = tem->next;
  }
  //right now tmp is at last node
}
int main()
{
    Node *head;
    Node *tail;
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_tail(head,40);
    print_linked_list(head);
    return 0;
}