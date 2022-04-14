#include <iostream>
using namespace std;    

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        
        Node(int d) : data (d), left (NULL), right (NULL){
        }
};

class BST{
    public:
        Node* insert(Node* root, int data){
            if(!root)
                root = new Node(data);
            else if(data <= root->data)
                root->left = insert(root->left, data);
            else
                root->right = insert(root->right, data);          
            
            return root;
        }

        int treeHeight(Node *root){
            if(!root)
                return -1;
            
            int h1  = 1 + treeHeight(root->left);
            int h2  = 1 + treeHeight(root->right);
            
            return (h1 > h2) ? h1 : h2;
        }

        void printLevel(Node *root, int level){
            if(!root || level < 0)
                return;
            
            if(level == 0)
                cout << root->data << " ";
            
            printLevel(root->left, level - 1);
            printLevel(root->right, level - 1);
        }

        void levelOrder(Node *root){
            int h = treeHeight(root);
            
            for(int i = 0; i <= h; i++)
                printLevel(root, i);
        }        
};

int main(){
    Node *root = NULL;
    BST bst1;

    int T;
    cin >> T;

    while(T--){
        int data;
        cin >> data;

        root = bst1.insert(root,data);
    }
    
    bst1.levelOrder(root);

    return 0;
}
