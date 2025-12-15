#include<iostream>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

Node* convert(int a[], int n, int l, int r) //array,array size, left indx,right indx
{
    if(l > r) //left ? right hole amra r kono Node create krte chaina
        return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    Node* leftroot = convert(a,n,l,mid-1); //recursion
    Node* rightroot = convert(a,n,mid+1,r); //recursion
    root->left = leftroot;
    root->right = rightroot;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    Node* root = convert(a,n,0,n-1);
    level_order(root);
    return 0;
}

/*
Sample input : 
6
2 5 8 11 15 18

Sample output :
8 2 15 5 11 18 

*/