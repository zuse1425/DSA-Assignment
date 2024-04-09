#include <iostream>
#include "QueueUsingArrays.cpp" // Include the definition of QueueUsingArrays

using namespace std;

int main() {
    int choice, size;
    cout << "Enter the size of the queue: ";
    cin >> size;

    QueueUsingArrays<int> queue(size); // Creating a queue object of integer type

    do {
        cout << "\nQueue Operations Menu:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Size" << endl;
        cout << "5. Is Empty?" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int element;
                cout << "Enter the element to enqueue: ";
                cin >> element;
                queue.enqueue(element);
                cout << "Element " << element << " enqueued successfully." << endl;
                break;
            }
            case 2: {
                if (!queue.isEmpty()) {
                    int dequeuedElement = queue.dequeue();
                    cout << "Element " << dequeuedElement << " dequeued successfully." << endl;
                } else {
                    cout << "Queue is empty. Cannot dequeue." << endl;
                }
                break;
            }
            case 3: {
                if (!queue.isEmpty()) {
                    cout << "Front element: " << queue.Front() << endl;
                } else {
                    cout << "Queue is empty." << endl;
                }
                break;
            }
            case 4: {
                cout << "Queue size: " << queue.getSize() << endl;
                break;
            }
            case 5: {
                if (queue.isEmpty()) {
                    cout << "Queue is empty." << endl;
                } else {
                    cout << "Queue is not empty." << endl;
                }
                break;
            }
            case 6: {
                cout << "Exiting the program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please enter a valid option." << endl;
            }
        }
    } while (choice != 6);

    return 0;
}

