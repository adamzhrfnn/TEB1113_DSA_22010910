/*
*****************************
id: 22010910
name: Adam Zharfan
contact: 0129520190
email: muhammad_22010910@utp.edu.my
*/

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int value){
        data = value;
        next = nullptr;
    }
};

class stack{
    private:
    node* top;
    
    public:
    stack(){
        top = nullptr;
    }
    
    void push(int value){
        node* newNode = new node(value);
        newNode->next = top;
        top = newNode;
    }
    
    void pop() {
        if (top == nullptr){
            return;
        }
        
        node* temp = top;
        top = top -> next;
        delete temp;
    }
    
    int peek(){
        int val;
        val = top -> data;
        return val;
    }
    
    void print() {
        node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    stack stack1;
    int value;
    
    cout << "Add a value to the list: ";
    cin >> value;
    stack1.push(value);
    
    cout << "Add another value to the list: ";
    cin >> value;
    stack1.push(value);
    
    cout << "Add another value to the list: ";
    cin >> value;
    stack1.push(value);
    
    stack1.print();
    
    cout << "Pop the top" << endl;
    stack1.pop();
    
    cout << "Edited List: " << endl;
    stack1.print();
    
    cout << "Top Value: ";
    cout << stack1.peek();
}
