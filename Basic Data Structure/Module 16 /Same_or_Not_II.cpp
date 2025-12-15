#include <iostream>
using namespace std;

class Node{
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

class myStack{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    void pop(){
        if(tail == NULL)
           return;
        sz--;
        Node* del = tail;
        tail = tail->prev;
        delete del;
        if(tail == NULL) 
            head = NULL;
        else 
            tail->next = NULL;
    }

    int top(){
        return tail->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        return head == NULL;
    }
};

class myQueue{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    void pop(){
        if(head == NULL) 
            return;
        sz--;
        Node* del = head;
        head = head->next;
        delete del;
        if(head == NULL) 
            tail = NULL;
        else head->prev = NULL;
    }

    int front(){
        return head->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        return head == NULL;
    }
};

int main(){
    int n, m;
    cin >> n >> m;

    myStack st;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    myQueue q;
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if(st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    bool same = true;
    while(!st.empty())
    {
        if(st.top() != q.front())
        {
            same = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if(same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
