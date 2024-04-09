#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class QueueUsingLinkedList {
private:
    Node* front;
    Node* rear;

public:
    QueueUsingLinkedList() {
        front = NULL;
        rear = NULL;
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        if (front == NULL) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Element " << value << " inserted into the queue." << endl;
    }

    void remove() {
        if (front == NULL) {
            cout << "Queue is empty. Cannot delete." << endl;
            return;
        }
        Node* temp = front;
        int deletedValue = temp->data;
        front = front->next;
        delete temp;
        cout << "Element " << deletedValue << " deleted from the queue." << endl;
    }

    void display() {
        if (front == NULL) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        Node* current = front;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    ~QueueUsingLinkedList() {
        Node* temp;
        while (front != NULL) {
            temp = front;
            front = front->next;
            delete temp;
        }
    }
};

int main() {
    QueueUsingLinkedList queue;
    int choice, element;

    do {
        cout << "\nQueue Operations Menu:" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> element;
                queue.insert(element);
                break;
            case 2:
                queue.remove();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}

