/*
*****************************
id: 22010910
name: Adam Zharfan
contact: 0129520190
email: muhammad_22010910@utp.edu.my
*/

#include <iostream>
#include <string>
using namespace std;

struct Student{
    int id;
    string name;
    int phone;
    string email;
};

int main(){
    Student student[10];
    
    for(int x = 0; x < 5; x++){
        cout << "Enter ID of Student " << x + 1 << " : ";
        cin >> student[x].id;
        cout << "Enter Student " << x + 1 << " Name: ";
        cin >> student[x].name;
        cout << "Enter Student " << x + 1 << " Phone Number: ";
        cin >> student[x].phone;
        cout << "Enter Student " << x + 1 << " Email: ";
        cin >> student[x].email;
    }
    
    for(int x = 0; x < 5; x++){
        cout << "****************************************" << endl;
        cout << "Student " << x << endl;
        cout << "ID: " << student[x].id << endl;
        cout << "Name: " << student[x].name << endl;
        cout << "Phone Number: " << student[x].phone << endl;
        cout << "Email: " << student[x].email << endl;
    }
};