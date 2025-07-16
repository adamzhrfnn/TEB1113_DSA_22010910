/*
*****************************
id: 22010910
name: Adam Zharfan
contact: 0129520190
email: muhammad_22010910@utp.edu.my
*/

#include <iostream>
using namespace std;

class Node {
public:
    int num;
    Node* left;
    Node* right;

    Node(int n) {
        num = n;
        left = nullptr;
        right = nullptr;
    }
};

class Tree {
public:
    Node* root;

    Tree() {
        root = nullptr;
    }

    void insert(int num) {
        root = insert_recursive(root, num);
    }

    Node* insert_recursive(Node* node, int num) {
        if (node == nullptr) {
            return new Node(num);
        }

        if (num < node->num) {
            node->left = insert_recursive(node->left, num);
        } else if (num > node->num) {
            node->right = insert_recursive(node->right, num);
        }

        return node;
    }

    bool search(int num) {
        return search_recursive(root, num);
    }

    bool search_recursive(Node* node, int num) {
        if (node == nullptr) {
            return false;
        }

        if (num == node->num) {
            return true;
        } else if (num < node->num) {
            return search_recursive(node->left, num);
        } else {
            return search_recursive(node->right, num);
        }
    }

    void display_preorder(Node* node) {
        if (node == nullptr)
            return;

        cout << node->num << " ";
        display_preorder(node->left);
        display_preorder(node->right);
    }

    void display() {
        cout << "Preorder Traversal: ";
        display_preorder(root);
        cout << endl;
    }
};

int main() {
    Tree tree;

    tree.insert(40);
    tree.insert(20);
    tree.insert(60);
    tree.insert(10);
    tree.insert(30);
    tree.insert(50);
    tree.insert(70);

    tree.display();

    int value;
    cout << "Enter number to search: ";
    cin >> value;

    if (tree.search(value)) {
        cout << value << " found in the tree." << endl;
    } else {
        cout << value << " not found in the tree." << endl;
    }

    return 0;
}
