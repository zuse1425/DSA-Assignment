#include <iostream>
#include <string>

using namespace std;

int main() {
    // Array of character pointers to store the strings
    const int MAX_STRINGS = 5;
    char *strings[MAX_STRINGS] = {
        "apple",
        "banana",
        "cherry",
        "orange",
        "grape"
    };

    // Print the strings using a loop
    cout << "Original array:\n";
    for (int i = 0; i < MAX_STRINGS; ++i) {
        cout << i + 1 << ". " << strings[i] << endl;
    }

    // Modify one string using dereferencing and character array operations
    string modifiedString = "mango";
    for (int i = 0; modifiedString[i] != '\0'; ++i) {
        strings[2][i] = modifiedString[i]; // Assuming strings[2] has enough space
    }
    strings[2][modifiedString.length()] = '\0'; // Null-terminate the modified string

    // Print the modified array
    cout << "\nModified array:\n";
    for (int i = 0; i < MAX_STRINGS; ++i) {
        cout << i + 1 << ". " << strings[i] << endl;
    }

    return 0;
}

