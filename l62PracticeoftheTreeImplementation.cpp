#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*right;
    node*left;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node*buildTree(node*root){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;
    if(data == -1){ // base case for stoping recursion
        return NULL;
    }
    root = new node(data);// create new node
    //Recursively build left and right subtree
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    
    return root;
    
}
int main(){}