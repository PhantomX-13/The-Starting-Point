#include <iostream>
using namespace std;

class Node{
public:
    string address;
    Node* next;
    Node* prev;

    Node(string address){
        this->address = address;
        next = NULL;
        prev = NULL;
    }
};

void insert(Node* &head, Node* &tail, string address)
{
    Node* newNode = new Node(address);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    } 
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

Node* find(Node* &head, string address)
{
    Node* temp = head;
    while(temp != NULL){
        if(temp->address == address)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    string word;
    while(cin >> word && word != "end")
    {
        insert(head, tail, word);
    }

    int Q;
    cin >> Q;
    cin.ignore();

    Node* current = head;

    for(int i = 0; i < Q; i++)
    {
        string line;
        getline(cin, line);

        if(line.substr(0, 6) == "visit ")
        {
            string address = line.substr(6);
            Node* found = find(head, address);
            if(found != NULL)
            {
                current = found;
                cout << current->address << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else if(line == "next")
        {
            if(current->next != NULL){
                current = current->next;
                cout << current->address << endl;
            } 
            else{
                cout << "Not Available" << endl;
            }
        }
        else if(line == "prev")
        {
            if(current->prev != NULL)
            {
                current = current->prev;
                cout << current->address << endl;
            } 
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}
