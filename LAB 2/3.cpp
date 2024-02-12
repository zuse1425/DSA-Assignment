#include <iostream>

const int MAX_SIZE = 100;

void insertElement(int arr[], int& size) {
    if (size >= MAX_SIZE) {
        std::cout << "Array is full. Cannot insert more elements." << std::endl;
        return;
    }

    int position, element;
    std::cout << "Enter the position to insert: ";
    std::cin >> position;

    if (position < 0 || position > size) {
        std::cout << "Invalid position. Insertion failed." << std::endl;
        return;
    }

    std::cout << "Enter the element to insert: ";
    std::cin >> element;

    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    ++size;

    std::cout << "Element inserted successfully." << std::endl;
}

void deleteElement(int arr[], int& size) {
    if (size == 0) {
        std::cout << "Array is empty. Cannot delete elements." << std::endl;
        return;
    }

    int position;
    std::cout << "Enter the position to delete: ";
    std::cin >> position;

    if (position < 0 || position >= size) {
        std::cout << "Invalid position. Deletion failed." << std::endl;
        return;
    }

    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    --size;

    std::cout << "Element deleted successfully." << std::endl;
}

void traverseArray(const int arr[], int size) {
    std::cout << "Array Elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Insert Element\n";
        std::cout << "2. Delete Element\n";
        std::cout << "3. Traverse Array\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                insertElement(arr, size);
                break;
            case 2:
                deleteElement(arr, size);
                break;
            case 3:
                traverseArray(arr, size);
                break;
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}

