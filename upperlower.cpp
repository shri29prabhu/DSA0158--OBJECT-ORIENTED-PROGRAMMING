#include <iostream>
#include <string>
#include <cctype> // For toupper and tolower functions

using namespace std;

class StringConverter {
private:
    string str;

public:
    // Constructor to initialize the string
    StringConverter(const string &s) : str(s) {}

    // Function to convert string to uppercase
    void toUpper() {
        for (char &c : str) {
            c = toupper(c);
        }
    }

    // Function to convert string to lowercase
    void toLower() {
        for (char &c : str) {
            c = tolower(c);
        }
    }

    // Function to display the string
    void display() const {
        cout << "Converted string: " << str << endl;
    }
};

int main() {
    string input;
    char choice;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Choose conversion (U for upper, L for lower): ";
    cin >> choice;

    StringConverter converter(input);

    if (choice == 'U' || choice == 'u') {
        converter.toUpper();
    } else if (choice == 'L' || choice == 'l') {
        converter.toLower();
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    converter.display();

    return 0;
}
