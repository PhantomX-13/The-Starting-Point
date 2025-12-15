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

void insert_at_tail(Node* &head, int val) 
{
    Node* newnode = new Node(val);
    if(head == NULL) 
    {
        head = newnode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void remove_duplicates(Node* head) 
{
    Node* n = head;

    while( n!= NULL) 
    {
        Node* p=n;
        Node* temp = n->next;

        while (temp != NULL) 
        {
            if(temp->val == n->val) 
            {
                Node* deleteNode = temp;
                p->next = temp->next;
                temp = temp->next;
                delete deleteNode;
            }
            else 
            {
                p=temp;
                temp=temp->next;
            }
        }

        n= n->next;
    }
}

void print_linked_list(Node* head) 
{
    Node* temp=head;
    while(temp!=NULL) 
    {
        cout << temp->val<< " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() 
{
    Node* head = NULL;
    int val;
    while(cin>>val && val!=-1) 
    {
        insert_at_tail(head, val);
    }
    remove_duplicates(head);
    print_linked_list(head);

    return 0;
}
