#include <iostream>
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

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    if(head == NULL || head == tail)
    {
        cout << "YES" << endl;
        return 0;
    }

    Node* front = head;
    Node* back = tail;
    bool isPalindrome = true;

    while(front != back && back->next != front)
    {
        if(front->val != back->val)
        {
            isPalindrome = false;
            break;
        }
        front = front->next;
        back = back->prev;
    }

    if(isPalindrome){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
