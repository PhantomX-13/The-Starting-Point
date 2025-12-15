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
    Node* head = new Node(10); //bracket diye constructor call krtesi
    Node* a = new Node(20);
    Node* b = new Node(30);


    // head is just a pointer here, not a object, so dereference krte hbe
    head->next = a; //dereference kora hyse
    a->next = b;

    cout << head->val << endl;
    cout << head->next->val << endl;


    return 0;
}

/* heap & stack bujhinai ekhane 
 pointer e kaj bujhinai 
& dereference keno krsi eta bujhinai 
alada object r constructor keno call krtesi ? */
