#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void sayHello() {
        cout << "Hi,i am " << name << "." << endl;
    }
};

class Student : public Person {
public:
    string institution;
    int yearOfStudy;
    string registrationNumber;

    Student(string name, int age, string institution, int yearOfStudy, string registrationNumber)
        : Person(name, age), institution(institution), yearOfStudy(yearOfStudy), registrationNumber(registrationNumber) {}

    void study() {
        cout << name << " is studying at " << institution << " in the year " << yearOfStudy << "." << endl;
    }

    void printRegistrationNumber() {
        cout << "My registration number is " << registrationNumber << "." << endl;
    }
};

int main() {
    Student student = Student("Tyreek Hill", 30, "Uon", 3, "HTR-0051/2016");
    student.sayHello();
    student.study();
    student.printRegistrationNumber();

    return 0;
}
