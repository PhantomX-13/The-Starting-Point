#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Special_list{
public:
    Node* head;
    Node* tail;
    int size;

    Special_list(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    bool insert_at_index(int idx, int val)
    {
        if(idx < 0 || idx > size)
        {
            return false;
        }

        Node* newnode = new Node(val);

        if(size == 0)
        {
            //bcz empty list
            head = tail = newnode;
        }
        else if(idx == 0)
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
        else if(idx == size)
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        else{
            Node* temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            Node* prevNode = temp->prev;

            prevNode->next = newnode;
            newnode->prev = prevNode;

            newnode->next = temp;
            temp->prev = newnode;
        }
        size++;
        return true;
    }

    void print_left()
    {
        cout << "L -> ";
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void print_right()
    {
        cout << "R -> ";
        Node* temp = tail;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main(){
    int Q;
    cin >> Q;

    Special_list spcl;

    for(int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;

        bool inserted = spcl.insert_at_index(X, V);

        if(!inserted)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            spcl.print_left();
            spcl.print_right();
        }
    }

    return 0;
}
