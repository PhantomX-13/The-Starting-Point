#include<iostream>
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
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;//normally d er shesh e NULL thakar kotha kintu ekhane ager jkono Node dibo cycle e felar jnno

    Node* slow = head;
    Node* fast = head;
    bool flag = false; //loop er moddhe jeta confirm tar ulta ta rakhbo

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next; //slow ek ghor smne agay
        fast = fast->next->next; //fast 2 ghor smne agay
        
        if(slow == fast) //cycle detected peye gesi
        {
            flag = true;
            break;
        }
    }
    if(flag == true)
        cout << "Cycle Detected";
    else
        cout << "No Cycle";
    return 0;
}