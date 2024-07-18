#include <iostream>
#include <limits> // Include <limits> header for numeric_limits
using namespace std;

class Student {
protected:
    string name;
    int age;
    char gender;

public:
    void getDetails() {
        cout << "Enter student's basic information:" << endl;
        cout << "Name?: "; cin >> name;
        cout << "Age?: "; cin >> age;
        cout << "Gender?: "; cin >> gender;
    }

    void displayDetails() const {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

class StudentResult : public Student {
private:
    int totalMarks;
    char grade;

public:
    void getResult() {
        cout << "Enter student's result information:" << endl;
        cout << "Total Marks?: ";
        cin >> totalMarks;

        // Validate input for totalMarks
        while (cin.fail()) {
            cin.clear(); // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Enter a valid integer for Total Marks: ";
            cin >> totalMarks;
        }

        // Clear input buffer to avoid issues with the next input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Grade?: ";
        cin >> grade;
    }

    void displayResult() const {
        cout << "Total Marks: " << totalMarks << ", Grade: " << grade << endl;
        float percentage = (static_cast<float>(totalMarks) / 500) * 100;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    StudentResult student;

    student.getDetails();
    student.getResult();

    cout << "\nStudent Information:" << endl;
    student.displayDetails();
    student.displayResult();

    return 0;
}
