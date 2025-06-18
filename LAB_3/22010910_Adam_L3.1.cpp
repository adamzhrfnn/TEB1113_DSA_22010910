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

class linkedList{
    private:
    node* head;
    
    public:
    linkedList(){
        head = nullptr;
    }
    
    void addNode(int value){
        node* newNode = new node(value);
        newNode->next = head;
        head = newNode;
    }
    
    void print() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    
    void delete_by_value(int val) {
        if (head == nullptr){
            return;
        }
        
        if (head->data == val) {
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        node* current = head;
        while (current->next != nullptr) {
            if (current->next->data == val) {
                node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                return;
            }
            current = current->next;
        }

        cout << "Value does not exist in the list..." << endl;
    }
};

int main(){
    linkedList list1;
    int value;
    
    cout << "Add a value to the list: ";
    cin >> value;
    list1.addNode(value);
    
    cout << "Add another value to the list: ";
    cin >> value;
    list1.addNode(value);
    
    cout << "Add another value to the list: ";
    cin >> value;
    list1.addNode(value);
    
    list1.print();
    
    cout << "Enter a value to delete from the list: ";
    cin >> value;
    list1.delete_by_value(value);
    
    cout << "Edited List: " << endl;
    list1.print();
}