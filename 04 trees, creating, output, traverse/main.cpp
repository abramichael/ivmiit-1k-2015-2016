#include <iostream>

using namespace std;

struct node {
    int val;
    node * left;
    node * right;
};

node * create_tree(int n)
{
    node * r = new node;
    cin >> r -> val;
    int nl = n / 2;
    int nr = n - nl - 1;
    if (nl > 0)
        r -> left = create_tree(nl);
    else
        r -> left = NULL;
    if (nr > 0)
        r -> right = create_tree(nr);
    else
        r -> right = NULL;
    return r;
}

void print_tree(node * root, int k) {
    if (root != NULL) {
        print_tree(root -> left, k + 1);
        for (int i = 0; i <= k; i++) {
            cout << "  ";
        }
        cout << root -> val << endl;
        print_tree(root -> right, k + 1);
    }
}

int sum(node * root) {
    if (root != NULL) {
        return root -> val +
               sum(root->left) +
               sum(root->right);
    }
    else {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    node * root = create_tree(n);
    print_tree(root, 0);
    cout << sum(root);
    return 0;
}
