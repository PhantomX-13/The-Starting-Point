#include <iostream>
using namespace std;

// Define Node class
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Insert at tail of the list
void insert_tail(Node* &head, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

// Count size of the linked list
int size_of_list(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    // Sample Input 1
    int arr1[] = {2, 1, 5, 3, 4, 8, 9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    Node* head1 = NULL;
    for(int i = 0; i < n1; i++) {
        insert_tail(head1, arr1[i]);
    }
    cout << "Output: " << size_of_list(head1) << endl;

    // Sample Input 2
    int arr2[] = {5, 1, 4, 5};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    Node* head2 = NULL;
    for(int i = 0; i < n2; i++) {
        insert_tail(head2, arr2[i]);
    }
    cout << "Output: " << size_of_list(head2) << endl;

    return 0;
}
