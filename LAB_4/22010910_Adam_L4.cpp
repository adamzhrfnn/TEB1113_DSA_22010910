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
    string data;
    node* next;
    
    node(string name){
        data = name;
        next = nullptr;
    }
};

class linkedList{
    private:
    node* head;
    node* tail;
    
    public:
    linkedList(){
        head = nullptr;
        tail = nullptr;
    }
    
    void add_element(string name){
        node* newNode = new node(name);
        
        if (head == nullptr){
            head = newNode;
            tail = newNode;
            tail -> next = head;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
            tail -> next = head;
        }
    }
    
    void print() {
        node* temp = head;
        int count = 0;
        
        cout << "Circular Linked List: " << endl;
        while (count < 1) {
            cout << temp->data << " -> ";
            temp = temp->next;
            if (temp == head){
                count++;
                if (count == 1){
                    cout << temp->data;
                }
            }
        }
    }
};

int main(){
    linkedList list1;
    list1.add_element("Muhammad");
    list1.add_element("Adam");
    list1.add_element("Zharfan");
    list1.add_element("Asri");
    list1.print();
}