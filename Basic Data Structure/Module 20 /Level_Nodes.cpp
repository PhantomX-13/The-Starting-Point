#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

// Build tree from level order input
Node* input_tree()
{
    int val;
    cin >> val;
    if(val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if(l != -1)
        {
            curr->left = new Node(l);
            q.push(curr->left);
        }

        if(r != -1)
        {
            curr->right = new Node(r);
            q.push(curr->right);
        }
    }
    return root;
}

// Print nodes at level 'k'
void print_level_k(Node* root, int k)
{
    if(!root)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node*, int>> q;  // pair of node and its level
    q.push({root, 0});

    bool found = false;

    while(!q.empty())
    {
        Node* node = q.front().first;
        int level = q.front().second;
        q.pop();

        if(level == k)
        {
            cout << node->val << " ";
            found = true;
        }

        if(level > k) break; // we passed the required level

        if(node->left) q.push({node->left, level + 1});
        if(node->right) q.push({node->right, level + 1});
    }

    if(!found) cout << "Invalid";
    cout << endl;
}

int main()
{
    Node* root = input_tree();
    int k;
    cin >> k;
    print_level_k(root, k);
    return 0;
}
