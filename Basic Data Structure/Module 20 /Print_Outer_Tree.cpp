#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

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

bool is_leaf(Node* node){
    return node && !node->left && !node->right;
}

void collect_left_boundary(Node* root, vector<int>& res)
{
    if(!root) return;
    if(is_leaf(root))
    {
        res.push_back(root->val);
        return;
    }
    if(root->left)
    {
        collect_left_boundary(root->left, res);
        res.push_back(root->val); // add after recursion to get bottom-up order
    }
    else if(root->right)
    {
        collect_left_boundary(root->right, res);
        res.push_back(root->val);
    }
}

// Collect right boundary leaves & nodes (in top-down order)
void collect_right_boundary(Node* root, vector<int>& res)
{
    if(!root) return;
    if(is_leaf(root))
    {
        res.push_back(root->val);
        return;
    }
    res.push_back(root->val);
    if(root->right)
    {
        collect_right_boundary(root->right, res);
    }
    else if(root->left)
    {
        collect_right_boundary(root->left, res);
    }
}

int main()
{
    Node* root = input_tree();
    if(!root) return 0;

    vector<int> left_boundary;
    vector<int> right_boundary;

    collect_left_boundary(root->left, left_boundary);
    collect_right_boundary(root->right, right_boundary);

    // Step 1: Print left boundary from bottom-up
    for(int i=0; i<left_boundary.size(); i++)
    {
    int val = left_boundary[i];
    cout << val << " ";
    }

    // Step 2: Print the root node (only once in center)
    cout << root->val << " ";

    // Step 3: Print right boundary from top-down
    for(int i = 0; i < right_boundary.size(); i++)
    {
    int val = right_boundary[i];
    cout << val << " ";
}

    cout << "\n";
    return 0;
}
