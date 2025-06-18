#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    
    node(int value){
        data = value;
        next = prev = nullptr;
    }
};

class linkedList{
    private:
    node* head;
    node* tail;
    node* temp;
    
    public:
    linkedList(){
        head = nullptr;
        tail = nullptr;
    }
    
    void addNode(int value){
        node* newNode = new node(value);
        newNode -> next = head;
        if (head != nullptr){
            head->prev = newNode;
        }
        else {
            tail = newNode;
        }
        head = newNode;
    }
    
    void printForward() {
        temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void printBackwards() {
        temp = tail;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }

    
    void delete_by_value(int val) {
        if (head == nullptr) return;

        if (head->data == val) {
            temp = head;
            head = head->next;
            if (head != nullptr) head->prev = nullptr;
            else tail = nullptr;
            delete temp;
            return;
        }

        if (tail->data == val) {
            temp = tail;
            tail = tail->prev;
            if (tail != nullptr) tail->next = nullptr;
            else head = nullptr; 
            delete temp;
            return;
        }

        node* current = head->next;
        while (current != nullptr) {
            if (current->data == val) {

                current->prev->next = current->next;

                if (current->next != nullptr) {
                    current->next->prev = current->prev;
                } 
                
                else {
                    tail = current->prev;
                }
                
                delete current;
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
    string ans;
    
    cout << "Add a value to the list: ";
    cin >> value;
    list1.addNode(value);
    
    cout << "Add another value to the list: ";
    cin >> value;
    list1.addNode(value);
    
    cout << "Add another value to the list: ";
    cin >> value;
    list1.addNode(value);
    
    cout << "Print the list forwards OR backwards? ";
    cin >> ans;

    while (ans != "forwards" && ans != "backwards"){
        cout << "invalid" << endl;
        cin >> ans;
    }

    if (ans == "forwards"){
        list1.printForward();
    }
    else{
        list1.printBackwards();
    }
    
    cout << "Enter a value to delete from the list: ";
    cin >> value;
    list1.delete_by_value(value);
    
    cout << "Edited List: " << endl;
    list1.printBackwards();
}