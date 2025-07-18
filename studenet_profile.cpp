#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;

public:
    string name;
    string branch;

    Student(int r, float m, string n, string b) {
        rollNo = r;
        marks = m;
        name = n;
        branch = b;
    }
    void setMarks(float m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks! Must be between 0 and 100." << endl;
        }
    }
    float getMarks() {
        return marks;
    }
    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name    : " << name << endl;
        cout << "Branch  : " << branch << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Marks   : " << marks << "%" << endl;
    }
};

int main() {
    Student s1(101, 85.5, "Ravi Kumar", "Computer Science");
    cout << "Name (public): " << s1.name << endl;
    cout << "Branch (public): " << s1.branch << endl;
    s1.setMarks(92.3);
    cout << "Updated Marks: " << s1.getMarks() << "%" << endl;
    s1.displayDetails();

    return 0;
}
