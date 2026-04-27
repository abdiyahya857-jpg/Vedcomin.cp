#include <iostream>
#include <limits>
#include <iomanip>

#include "List.h"
using namespace std;
// ================== Node ======================

Node::Node() {
 id = 0;
 name = " ";
 salary = 0.0;
 next = nullptr;
}

Node::Node(int id, string name, double salary) {
 this->id = id;
 this->name = name;
 this->salary = salary;
 this->next = NULL;
}

int Node::getId() {
 return id;
}
string Node::getName() {
 return name;
}

double Node::getSalary() {
 return salary;
}

Node* Node::getNext() {
 return next;
}

void Node::setId(int id) {
  this->id = id;
}
void Node::setName(string name) {
 this->name = name;
}
void Node::setSalary(double salary) {
 this->salary = salary;
}
void Node::setNext(Node* next) {
 this->next = next;
}


// =========================== List ============================

List::List() {
 head = NULL;
 tail = NULL;
}

bool List::isEmpty() {
 if (head == NULL) {
  return true;
 }
 else {
 return false;
 }
}
void List::insert(int id, string name, double salary) {
    Node* temp = new Node(id, name, salary);
    if (isEmpty()) {
        head = temp;
        tail = temp;
    } else {
        tail->setNext(temp);
        tail = temp;
    }
}

Node* List::update(int value, string tempName, double tempSalary) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->getId() == value) {
            temp->setName(tempName);
            temp->setSalary(tempSalary);
            cout << "Data Updated Successfully...." << endl;
            return temp;
        }
        temp = temp->getNext();
    }
    cout << "Data Update Failed...." << endl;
    return nullptr;
}

Node* List::search(int value) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->getId() == value) {
            cout << "ID     : " << temp->getId() << endl;
            cout << "Name   : " << temp->getName() << endl;
            cout << "Salary : " << temp->getSalary() << endl;
            return temp; // Exit after finding the node
        }
        temp = temp->getNext();
    }
    cout << "No Data Found...." << endl;
    return nullptr;
}

void List::print() {
    Node* temp = head;
    int count = 1;

    // Set fixed column widths for alignment
    const int indexWidth = 10;
    const int idWidth = 10;
    const int nameWidth = 20;
    const int salaryWidth = 15;

    // Print header
    cout << "\n\n"
         << std::left << std::setw(indexWidth) << "Index"
         << std::setw(idWidth) << "ID"
         << std::setw(nameWidth) << "Name"
         << std::setw(salaryWidth) << "Salary"
         << "\n"
         << std::string(indexWidth + idWidth + nameWidth + salaryWidth, '-') << endl;

    // Print rows
    while (temp != nullptr) {
        cout << std::left
             << std::setw(indexWidth) << count
             << std::setw(idWidth) << temp->getId()
             << std::setw(nameWidth) << temp->getName()
             << std::setw(salaryWidth) << temp->getSalary() << endl;

        temp = temp->getNext();
        count++;
    }
}
void List::remove(int target) {
    Node* temp = head;
    Node* previous = nullptr;

    while (temp != nullptr && temp->getId() != target) {
        previous = temp;
        temp = temp->getNext();
    }

    if (temp == nullptr) {
        cout << "ID not found. Removal failed." << endl;
        return;
    }

    if (temp == head) {
        head = head->getNext();
    } else {
        previous->setNext(temp->getNext());
    }

    if (temp == tail) {
        tail = previous;
    }

    delete temp;
    cout << "Employee with ID " << target << " removed successfully." << endl;
}

void List::mainMenu() {
    system("clear");
    int option = 0;

    while (true) {
        title();
        menuOptions();
        cout << "\t\t\t" << "Please Enter Your Choice : ";
        if (!(cin >> option)) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch (option) {
            case 1: {
                int tempID;
                string tempName;
                double tempSalary;
                cout << "Enter Employee ID : ";
                cin >> tempID;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter Employee Name : ";
                getline(cin, tempName);
                cout << "Enter Employee Salary : ";
                cin >> tempSalary;
                insert(tempID, tempName, tempSalary);
                cout << "\t\t\t" << "Data Inserted Successfully...." << endl;
                break;
            }
            case 2: {
                int targetID;
                cout << "Enter Employee ID to Remove: ";
                cin >> targetID;
                remove(targetID);
                break;
            }
            case 3: {
                int searchID;
                cout << "Enter Employee ID to Search: ";
                cin >> searchID;
                search(searchID);
                break;
            }
            case 4: {
                int updateID;
                string newName;
                double newSalary;
                cout << "Enter Employee ID to Update: ";
                cin >> updateID;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter New Name: ";
                getline(cin, newName);
                cout << "Enter New Salary: ";
                cin >> newSalary;
                update(updateID, newName, newSalary);
                break;
            }
            case 5: {
                print();
                break;
            }
            case 6: {
                cout << "\t\t\t" << "==================================" << endl;
                cout << "\t\t\t" << "||   Goodbye! Have a Nice Day   ||" << endl;
                cout << "\t\t\t" << "==================================" << endl;
                exit(0);
            }
            default: {
                cout << "Invalid Choice. Please Try Again...." << endl;
                break;
            }
        }
    }
}

void List::title() {
    cout << "\n\n";
    cout << "\t\t\t" << "==============================================" << endl;
    cout << "\t\t\t" << "================== MAIN MENU =================" << endl;
    cout << "\t\t\t" << "==============================================" << endl;
    cout << "\n\n";
}

void List::menuOptions() {
    cout << "\t\t\t" << "1 | Add New Employee" << endl;
    cout << "\t\t\t" << "2 | Delete Employee" << endl;
    cout << "\t\t\t" << "3 | Search Employee" << endl;
    cout << "\t\t\t" << "4 | Update Employee" << endl;
    cout << "\t\t\t" << "5 | Show All Employees" << endl;
    cout << "\t\t\t" << "6 | Exit" << endl;
}