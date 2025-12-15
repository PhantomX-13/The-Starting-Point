#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    //Node a,b,c;
    Node a(10),b(20),c(30); //static object
    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl; //c er value
    return 0;
}

/* 
10 2B  20 3B  30 N (1st part k head bole)
-----  -----  ----- 
 5B      2B     3B  

 */
