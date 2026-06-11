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
    void search(string elemnet,Node* &parent, Node* &currentNode){
        
        }
    }
};
