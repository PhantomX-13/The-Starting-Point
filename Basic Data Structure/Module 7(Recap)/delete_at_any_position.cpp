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

void insert_at_tail(Node* &head, Node* &tail,int val)
{
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

void delete_at_any_pos(Node* head, int idx)
{
    Node* tmp = head;
    for(int i=1; i<idx; i++)
    {
        tmp = tmp->next;
    }
    //j index e node dlt krte chay tmp tar ager index e ache ekhn

    Node* deleteNode = tmp->next;
    //connection
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true) //infinite loop, mane jotokkhn input ashbe, totokhn cholbe
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    delete_at_any_pos(head,2);
    print_linked_list(head);
    return 0;
}