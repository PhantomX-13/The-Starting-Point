#include<iostream>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;

    //input first list
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    //input second list
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val);
    }

    int size = 0, size2 = 0;
    Node* tmp = head;
    Node* tmp2 = head2;

    while(tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    while(tmp2 != NULL)
    {
        size2++;
        tmp2 = tmp2->next;
    }

    //compare size 
    if( size != size2)
    {
        cout << "NO"<< endl;
    }
    else{
        tmp = head;
        tmp2 = head2;
        bool isSame = false;

        while(tmp != NULL && tmp2 != NULL)
        {
            if(tmp->val != tmp2->val)
            {
                isSame = true;
                break;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }

        if( isSame == true){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}