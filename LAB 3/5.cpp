#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int columns = 5;

    char charArray[rows][columns] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'},
        {'K', 'L', 'M', 'N', 'O'}
    };

    // Display the original array
    std::cout << "Original 2D Array of Characters:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << charArray[i][j] << " ";
        }
        cout << endl;
    }
	cout<<endl;
    // Limitation 1: Fixed size
    // You cannot change the size of the array at runtime
    // Error
    
    /*
    const int newRows = 4;
    const int newColumns = 6;
    charArray = new char[newRows][newColumns];
    */
    
    return 0;
}
