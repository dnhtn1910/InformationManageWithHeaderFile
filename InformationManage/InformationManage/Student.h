#pragma once
#include "Person.h"
#include<iostream>
class Student :
    public Person
{
private:
    double diemGK = -1;
    double diemCK = -1;
    double gpa = -1;
    int ID = -1;
public:
    Student(string name, int ID, int age, string address, double diemGK, double diemCK);
    void setDiemGK(double diemGK);
    double getDiemGK();
    double getDiemCK();
    void setDiemCK(double diemCK);
    void setID(int ID);
    int getID();
    double getGPA();
    void display();
};

