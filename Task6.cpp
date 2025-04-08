#include <iostream>
#include <cstring> // for strcmp
using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        cout << "\n--- Student Record Menu ---\n";
        cout << "1. Add a student\n";
        cout << "2. Display all students\n";
        cout << "3. Search for student by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (count >= MAX_STUDENTS) {
                    cout << "Maximum student limit reached.\n";
                    break;
                }

                cout << "Enter student name: ";
                cin.ignore(); // flush newline
                cin.getline(students[count].name, 50);

                cout << "Enter student ID: ";
                cin >> students[count].id;

                cout << "Enter student grade: ";
                cin >> students[count].grade;

                count++;
                cout << "Student added successfully.\n";
                break;
            }

            case 2: {
                if (count == 0) {
                    cout << "No students to display.\n";
                } else {
                    cout << "\n--- Student List ---\n";
                    for (int i = 0; i < count; i++) {
                        cout << "Name: " << students[i].name
                             << ", ID: " << students[i].id
                             << ", Grade: " << students[i].grade << endl;
                    }
                }
                break;
            }

            case 3: {
                if (count == 0) {
                    cout << "No students to search.\n";
                    break;
                }

                int searchId;
                cout << "Enter student ID to search: ";
                cin >> searchId;
                bool found = false;

                for (int i = 0; i < count; i++) {
                    if (students[i].id == searchId) {
                        cout << "Student found!\n";
                        cout << "Name: " << students[i].name
                             << ", ID: " << students[i].id
                             << ", Grade: " << students[i].grade << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Student with ID " << searchId << " not found.\n";
                }

                break;
            }

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
