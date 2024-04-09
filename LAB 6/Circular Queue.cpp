#include <iostream>
using namespace std;

#define SIZE 5 // Change the size of the queue as needed

class CircularQueue {
private:
    int items[SIZE], front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1)
            return true;
        if (front == rear + 1)
            return true;
        return false;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    void insertElement(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % SIZE;
            items[rear] = element;
            cout << "Inserted " << element << endl;
        }
    }

    void deleteElement() {
        int element;
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            element = items[front];
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % SIZE;
            }
            cout << "Deleted element: " << element << endl;
        }
    }

    void display() {
        int i;
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Front -> ";
            for (i = front; i != rear; i = (i + 1) % SIZE)
                cout << items[i] << " ";
            cout << items[i] << " ";
            cout << " <- Rear" << endl;
        }
    }
};

int main() {
    CircularQueue queue;
    int choice, element;

    do {
        cout << "---------------------" << endl;
        cout << "Circular Queue Menu" << endl;
        cout << "---------------------" << endl;
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
                queue.insertElement(element);
                break;
            case 2:
                queue.deleteElement();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again!" << endl;
        }
    } while (choice != 4);

    return 0;
}

