#include <iostream>

using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    int studentID;

public:
    void setStudentDetails(string n, int a, int id) {
        setDetails(n, a);
        studentID = id;
    }

    void displayStudent() {
        display();
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string sub) {
        setDetails(n, a);
        subject = sub;
    }

    void displayTeacher() {
        display();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student student1;
    student1.setStudentDetails("Alice", 20, 101);
    cout << "Student Details:\n";
    student1.displayStudent();

    Teacher teacher1;
    teacher1.setTeacherDetails("Mr. Smith", 45, "Mathematics");
    cout << "\nTeacher Details:\n";
    teacher1.displayTeacher();

    return 0;
}

