#include <iostream>
#include <string>

using namespace std;

class Person {
    public:


        Person(int age, string firstname, string lastname) {
            this->age = age;
            this->firstname = firstname;
            this->lastname = lastname;
        }

        void getValues()
        {
            cout << "Age: " << age << endl;
            cout << "First name: " << firstname << endl;
            cout << "Last name: " << lastname << endl;
        }

        void setValues(int age, string firstname, string lastname) {
            this->age = age;
            this->firstname = firstname;
            this->lastname = lastname;
        }

    private:
        int age;
        string firstname;
        string lastname;
};

int main() {
    Person person_X(32, "Tyreek", "Hill");

    person_X.getValues();

    person_X.setValues(17, "John", "kimani");

    person_X.getValues();

    return 0;
}
