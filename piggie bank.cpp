#include <iostream>
using namespace std;

class AddAmount {
    int amount;

public:
    // Constructor with no parameter
    AddAmount() : amount(50) {}

    // Constructor with a parameter to add to the initial amount
    AddAmount(int addAmount) : amount(50 + addAmount) {}

    // Method to display the final amount
    void displayAmount() const {
        cout << "Final amount in the Piggie Bank: $" << amount << endl;
    }
};

int main() {
    AddAmount piggie1; // Object with no additional amount
    AddAmount piggie2(7); // Object with additional amount

    // Display the final amount for both objects
    cout << "Initial amount in the Piggie Bank: $50" << endl;
    piggie1.displayAmount(); // Should display 50
    piggie2.displayAmount(); // Should display 57

    return 0;
}
