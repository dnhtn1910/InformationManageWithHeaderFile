#include "Teacher.h"
#include<iostream>
#include"Person.h"
using namespace std;

    Teacher :: Teacher(string name, int age, string address, int salary) : Person(name, age, address) {
        this->salary = salary;
    }
    void Teacher::setSalary(int salary) {
        this->salary = salary;
    }
    int Teacher::getSalary() {
        return salary;
    }
    void Teacher::display() {
        cout << endl << "\t\tTEACHER'S INFORMATION!" << endl;
        Person::display();
        cout << "Salary: " << salary << endl;
    }
