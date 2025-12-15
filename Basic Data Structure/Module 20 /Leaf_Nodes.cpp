#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Step 1: Input the tree from level-order
Node* input_tree() {
    int val;
    cin >> val;
    Node* root;

    if (val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if (root) q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myLeft, *myRight;
        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
    return root;
}

// Step 2: Collect all leaf node values
void get_leaf_nodes(Node* root, vector<int>& leaves) {
    if (root == NULL) return;

    if (root->left == NULL && root->right == NULL) {
        leaves.push_back(root->val);
        return;
    }

    get_leaf_nodes(root->left, leaves);
    get_leaf_nodes(root->right, leaves);
}

int main() {
    Node* root = input_tree();

    vector<int> leaf_values;
    get_leaf_nodes(root, leaf_values);

    // Step 3: Sort in descending order
    sort(leaf_values.rbegin(), leaf_values.rend());

    // Step 4: Print
    for (int val : leaf_values) {
        cout << val << " ";
    }

    return 0;
}
