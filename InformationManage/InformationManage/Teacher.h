#pragma once
#include "Person.h"
#include<iostream>
class Teacher :
    public Person
{
private:
    int salary;
public:
    Teacher(string name, int age, string address, int salary);
    void setSalary(int salary);
    int getSalary();
    void display();

};

