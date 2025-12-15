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

void insert_at_head(Node* &head, Node* &tail, int v) 
{
    Node* newNode = new Node(v);
    if(head==NULL) 
    {
        tail = newNode;
        head = tail;

    }
    else
    {
        newNode->next=head;
        head = newNode;
    }
}

void insert_at_tail(Node* &head, Node* &tail, int v) 
{
    Node* newNode = new Node(v);
    if(head ==NULL) 
    {
        tail =newNode;
        head =tail;

    }
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_at_index(Node* &head, Node* &tail, int idx) 
{
    if(head==NULL)
    {
        return;
    }

    if(idx==0) 
    {
        Node* delNode =head;
        head = head->next;
        delete delNode;
        if(head == NULL) 
        {
            tail = NULL;
        }
        return;
    }

    Node* tmp = head;
    for(int i=0; i<idx-1; i++) 
    {
        if(tmp == NULL || tmp->next == NULL ) 
        {
            return;
        }
        tmp = tmp->next;
    }

    if(tmp->next==NULL) 
    {
        return;
    }

    Node* delNode = tmp->next;
    tmp->next = tmp->next->next;

    if (delNode==tail) 
    {
        tail=tmp;
    }

    delete delNode;
}

void print_list(Node* head) 
{
    Node* tmp = head;
    while (tmp != NULL) 
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    for(int i=0; i<q; i++) 
    {
        int x, v;
        cin >> x >> v;

        if(x==0) 
        {
            insert_at_head(head, tail, v);
        }
        else if(x == 1) 
        {
            insert_at_tail(head, tail, v);
        }
        else if(x==2) 
        {
            delete_at_index(head, tail, v);
        }

        print_list(head);
    }

    return 0;
}
