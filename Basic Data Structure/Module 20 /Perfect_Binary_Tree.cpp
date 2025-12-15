#include <iostream>
#include <queue>
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

// Step 1: Build the tree from level-order
Node* input_tree()
{
    int val;
    cin >> val;
    if (val == -1) return NULL;

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

// Step 2: Get depth by going left-most
int get_depth(Node* root)
{
    int depth = 0;
    while(root)
    {
        depth++;
        root = root->left;
    }
    return depth;
}

// Step 3: Check if tree is perfect
bool is_perfect(Node* root, int depth, int level = 1)
{
    if(!root) return true;

    // If leaf node
    if(!root->left && !root->right)
        return depth == level;

    // If one child is missing → not perfect
    if(!root->left || !root->right)
        return false;

    return is_perfect(root->left, depth, level + 1) &&
           is_perfect(root->right, depth, level + 1);
}

int main()
{
    Node* root = input_tree();

    int depth = get_depth(root);

    if(is_perfect(root, depth))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
