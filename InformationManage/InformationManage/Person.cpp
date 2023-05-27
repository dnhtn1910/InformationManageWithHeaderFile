#pragma once
#include<iostream>
#include "Person.h"
using namespace std;

    Person :: Person(string name, int age, string address) {
        this->name = name;
        this->age = age;
        this->address = address;
    }
    void Person :: setName(string name) {
        this->name = name;
    }
    string Person::getName() {
        return name;
    }
    void Person::setAge(int age) {
        this->age = age;
    }
    int Person::getAge() {
        return age;
    }
    void Person::setAddress(string address) {
        this->address = address;
    }
    string Person::getAddress() {
        return address;
    }
    void Person::display() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Address: " << this->address << endl;
    }