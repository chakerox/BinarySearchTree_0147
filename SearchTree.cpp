#include<iostream>
#include<string>
//#include<tre
using namespace std;

class Node{
    public:
    string info;
    Node* leftchild;
    Node* rightchild;

    //Consructor for the node class
    Node(string i, Node* l, Node* r){
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree{
    public:
    Node* root;
    BinaryTree(){
        root = NULL;//initializing root to null
    }
    //insert a node in the binary tree
    void insert(string element){
        Node* newNode = new Node(element, NULL, NULL);
       newNode->info = element;
       newNode->leftchild = NULL;
       newNode->rightchild = NULL;

       Node* parent = NULL;
        Node* currentNode = NULL;
        
        search(element, parent, currentNode);

        if (parent == NULL) {
            root = newNode; 
            return;// Tree was empty, new node becomes the root
        }if (element < parent->info) {
            parent->leftchild = newNode; // Insert as left child
        } else if(element > parent->info) {
            parent->rightchild = newNode; // Insert as right child
        }
    }

    //this function searches the current node of the specified node
    // as wll as the current node of its parent
    void search(string element,Node* &parent, Node* &currentNode){
        currentNode = root;
        parent = NULL;

        while ((currentNode != NULL)&&(currentNode->info != element)){
            parent = currentNode;
            if (element < currentNode->info) {
                currentNode = currentNode->leftchild; // Move to left child
            } else {
                currentNode = currentNode->rightchild; // Move to right child
            }
        }
    }
    void inorder(Node*ptr){
        if(root == NULL){
            cout<<"Tree is empty"<<endl;
            return;
        }if(ptr != NULL){
            inorder(ptr->leftchild);
            cout<<ptr->info<<" ";
            inorder(ptr->rightchild);
        }
    }
    void preorder(Node*ptr){
        if(root == NULL){
            cout<<"Tree is empty"<<endl;
            return;
        }if(ptr != NULL){
            cout<<ptr->info<<" ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }
    }
    void postorder(Node*ptr){
        //performs postorder traversal of the tree
        if(root == NULL){
            cout<<"Tree is empty"<<endl;
            return;
        }if(ptr != NULL){
            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout<<ptr->info<<" ";
        }
    }

};
