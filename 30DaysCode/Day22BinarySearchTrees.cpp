#include <iostream>
using namespace std;    

class Node{

    public:
        int data;
        Node *left;
        Node *right;
        
        Node(int d): data(d), left(NULL), right(NULL) {
        }
};

class BST{

    public:
          Node * insert(Node *root, int data) {

            if(!root)
                return new Node(data);
            else if(data <= root->data)
                root->left = insert(root->left, data);
            else
                root->right = insert(root->right, data);

            return root;
        }

        int getHeight(Node* root){
            int lHeight = -1;
            int rHeight = -1;

            if(root){
                lHeight = 1 + getHeight(root->left);
                rHeight = 1 + getHeight(root->right);
            }
            
            return (lHeight > rHeight) ? lHeight : rHeight;
        }
};

int main() {
    BST bst1;
    Node* root = NULL;

    int count;
    cin >> count;

    while(count--){
        int data;
        cin >> data;
        
        root = bst1.insert(root, data);
    }
    
    cout << bst1.getHeight(root);

    return 0;
}
