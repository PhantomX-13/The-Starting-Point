#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

int search(Node* head, int x)
{
    Node* temp = head;
    int idx = 0;
    while(temp != NULL)
    {
        if(temp->val == x) 
        {
            return idx;
        }
        temp = temp->next;
        idx++;
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        Node* head = NULL;
        Node* tail = NULL;
        int val;

        while(cin >> val && val != -1)
        {
            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;

        cout << search(head, x) << endl;
    }

    return 0;
}
