#include <iostream>
using namespace std;

class Example {
private:
    int x;
public:
    // Constructor to initialize x
    Example(int x) {
        // Using 'this' pointer to disambiguate the member variable and the parameter
        this->x = x;
    }

    // Member function to set the value of x using 'this' pointer
    void setX(int x) {
        this->x = x;
    }

    // Member function to display the value of x
    void display() {
        cout << "x = " << this->x << endl;
    }
};

int main() {
    // Creating an object of Example with initial value 20
    Example example(20);

    // Display the initial value of x
    example.display();
    return 0;
}