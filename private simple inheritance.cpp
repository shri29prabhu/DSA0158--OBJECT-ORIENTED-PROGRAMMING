#include <iostream>
using namespace std;

// Base class A with a protected member x
class A {
protected:
    int x;

public:
    A() : x(0) {} // Default constructor initializing x to 0
};

// Derived class B privately inherits from class A
class B : private A {
public:
    void setX(int value) {
        x = value; // Accessing x directly from B (because B privately inherits A)
    }

    void displayX() {
        cout << "Value of x in class B: " << x << endl;
    }
};

int main() {
    B objB;

    objB.setX(10); // Allowed since setX() is public in B and sets x (inherited from A)
    objB.displayX(); // Allowed since displayX() is public in B and accesses x (inherited from A)

    return 0;
}
