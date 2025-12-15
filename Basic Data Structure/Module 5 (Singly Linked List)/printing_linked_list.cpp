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
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node (40);

    head->next = a;
    a->next = b;
    b->next = c;

    // cout << head->val << endl;
    // cout << head->next->val << endl;
    // cout << head->next->next->val<< endl;
    // cout << head->next->next->next->val << endl;

    while(head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
    return 0;
}
