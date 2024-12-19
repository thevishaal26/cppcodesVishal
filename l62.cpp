#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

        node(int d) {
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

// Function to build the tree recursively
node* buildTree(node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;
    
    if (data == -1) {  // Base case for stopping recursion
        return NULL;
    }
    
    root = new node(data);  // Create new node
    
    // Recursively build left and right subtrees
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    
    return root;
}

// Level order traversal (BFS)
void levelOrderTraversal(node* root) {
    if (root == NULL) return;
    
    queue<node*> q;
    q.push(root);
    q.push(NULL);  // Marker for end of level
    
    while (!q.empty()) {
        node* temp = q.front();
        q.pop();
        
        if (temp == NULL) {
            // End of current level
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);  // Add marker for the next level
            }
        } else {
            // Print the current node
            cout << temp->data << " ";
            
            // Add left and right children
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

// Inorder traversal (Left, Root, Right)
void inorder(node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);  // Visit left subtree
    cout << root->data << " ";  // Print root node
    inorder(root->right);  // Visit right subtree
}

// Preorder traversal (Root, Left, Right)
void preorder(node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";  // Print root node
    preorder(root->left);  // Visit left subtree
    preorder(root->right);  // Visit right subtree
}

// Postorder traversal (Left, Right, Root)
void postorder(node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);  // Visit left subtree
    postorder(root->right);  // Visit right subtree
    cout << root->data << " ";  // Print root node
}

// Function to build tree from level order input
node* buildFromLevelOrder(node* root) {
    cout << "Enter data for root: ";
    int data;
    cin >> data;
    
    if (data == -1) {
        return NULL;
    }
    
    root = new node(data);
    queue<node*> q;
    q.push(root);
    
    while (!q.empty()) {
        node* temp = q.front();
        q.pop();
        
        // Input for left child
        cout << "Enter left child for " << temp->data << ": ";
        int leftData;
        cin >> leftData;
        if (leftData != -1) {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        
        // Input for right child
        cout << "Enter right child for " << temp->data << ": ";
        int rightData;
        cin >> rightData;
        if (rightData != -1) {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
    
    return root;
}

int main() {
    node* root = NULL;

    // Choose either buildTree or buildFromLevelOrder for constructing the tree

    // Building the tree recursively
    root = buildTree(root);

    // OR

    // Building the tree from level order
    // root = buildFromLevelOrder(root);

    // Displaying the tree using inorder, preorder, postorder, and level order traversal
    cout << "Inorder Traversal of the Binary Tree: ";
    inorder(root);
    cout << endl;
    
    cout << "Preorder Traversal of the Binary Tree: ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal of the Binary Tree: ";
    postorder(root);
    cout << endl;

    cout << "Level Order Traversal of the Binary Tree: " << endl;
    levelOrderTraversal(root);

    return 0;
}
