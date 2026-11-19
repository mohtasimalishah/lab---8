
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int roll;
    float gpa;
};

int main()
{
    Student s1, s2;

    cout << "Enter first student details:" << endl;

    cout << "Enter name: ";
    getline(cin, s1.name);

    cout << "Enter roll number: ";
    cin >> s1.roll;

    cout << "Enter GPA: ";
    cin >> s1.gpa;

    cin.ignore();

    cout << endl;

    cout << "Enter second student details:" << endl;

    cout << "Enter name: ";
    getline(cin, s2.name);

    cout << "Enter roll number: ";
    cin >> s2.roll;

    cout << "Enter GPA: ";
    cin >> s2.gpa;

    cout << endl;

    if (s1.gpa > s2.gpa)
    {
        cout << s1.name << " has the higher GPA.";
    }
    else if (s2.gpa > s1.gpa)
    {
        cout << s2.name << " has the higher GPA.";
    }
    else
    {
        cout << "Both students have equal GPA.";
    }

    return 0;
}

