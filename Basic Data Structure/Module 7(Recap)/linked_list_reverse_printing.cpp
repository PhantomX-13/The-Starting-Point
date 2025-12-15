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

void print_reverse(Node* tmp)
{
    //base case(recursion kothay jeye thambe)
    if(tmp == NULL)
    {
        return;
    }
    //cout << i << endl;
    print_reverse(tmp->next);
    cout << tmp->val << endl;
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
    print_reverse(head);
    return 0;
}