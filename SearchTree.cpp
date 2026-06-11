#include<iostream>
#include<string>
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
        
    }
};