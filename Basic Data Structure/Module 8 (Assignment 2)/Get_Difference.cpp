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

void insert_at_tail(Node*& head, Node*& tail, int val)
{
    Node* newnode= new Node(val);

    if(head==NULL) 
    {
        head=newnode;
        tail=newnode;
    }
    else 
    {
        tail->next = newnode;
        tail = tail->next;
    }
}

int get_difference(Node* head) 
{
    if(head==NULL) 
    {
        return 0;
    }

    int min = head->val;
    int max = head->val;

    Node* tmp = head;
    while(tmp != NULL) 
    {
        if(tmp->val < min) 
        {
            min = tmp->val;
        }
        if(tmp->val > max) 
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    return max - min;
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true) 
    {
        cin >> val;
        if(val == -1) 
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    int difference = get_difference(head);
    cout << difference <<endl;

    return 0;
}
