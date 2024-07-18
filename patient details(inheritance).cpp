#include <iostream>
#include <string>

using namespace std;


class Patient {
protected:
    string patientName;
    int bedNumber;
    string wardName;
    double dues;
public:
    void getPatientDetails() {
        cout << "Enter Patient Name: ";
        cin.ignore(); 
        getline(cin, patientName);
        cout << "Enter Bed Number: ";
        cin >> bedNumber;
        cout << "Enter Ward Name: ";
        cin.ignore(); 
        getline(cin, wardName);
        cout << "Enter Dues of Patient: ";
        cin >> dues;
    }

    void displayPatientDetails() const {
        cout << "Patient Name: " << patientName << endl;
        cout << "Bed Number: " << bedNumber << endl;
        cout << "Ward Name: " << wardName << endl;
        cout << "Total Dues of Patient: " << dues << endl;
    }
};


class Doctor {
protected:
    string doctorName;
    string degree;
public:
    void getDoctorDetails() {
        cout << "Enter Doctor Name: ";
        cin.ignore(); 
        getline(cin, doctorName);
        cout << "Enter Doctorate Degree: ";
        getline(cin, degree);
    }

    void displayDoctorDetails() const {
        cout << "Doctor Name: " << doctorName << endl;
        cout << "Doctorate Degree: " << degree << endl;
    }
};


class PatientDetails : public Patient, public Doctor {
public:
    void getDetails() {
        getPatientDetails();
        getDoctorDetails();
    }

    void displayDetails() const {
        cout << "Inserted Data is:" << endl;
        displayPatientDetails();
        displayDoctorDetails();
    }
};

int main() {
    PatientDetails patientDetails;
    cout << "Enter Data" << endl;
    patientDetails.getDetails();
    cout << endl;
    patientDetails.displayDetails();
    return 0;
}