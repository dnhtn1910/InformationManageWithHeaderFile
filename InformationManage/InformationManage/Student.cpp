#include<iostream>
#include "Student.h"
#include"Person.h"
using namespace std;

    Student :: Student(string name, int ID, int age, string address, double diemGK, double diemCK) : Person(name, age, address) {
        if (diemGK >= 0 && diemGK <= 10) {
            this->diemGK = diemGK;
        }
        if (diemCK >= 0 && diemCK <= 10) {
            this->diemCK = diemCK;
        }
        this->ID = ID;
        this->gpa = this->diemGK * 0.3 + diemCK * 0.7;
    }
    void Student::setDiemGK(double diemGK) {
        if (diemGK >= 0 && diemGK <= 10) {
            this->diemGK = diemGK;
        }

    }
    double Student::getDiemGK() {
        return diemGK;
    }
    double Student::getDiemCK() {
        return diemCK;
    }
    void Student::setDiemCK(double diemCK) {
        if (diemCK >= 0 && diemCK <= 10) {
            this->diemCK = diemCK;
        }
    }
    void Student::setID(int ID) {
        this->ID = ID;
    }
    int Student::getID() {
        return ID;
    }
    double Student::getGPA() {
        return gpa;
    }
    void Student::display() {
        cout << endl << "\t\tSTUDENT'S INFORMATION!" << endl;
        cout << "Student's ID: " << ID << endl;
        Person::display();
        cout << "Diem giua ki:" << diemGK << endl;
        cout << "Diem cuoi ki:" << diemCK << endl;
        cout << "GPA: " << gpa << endl;

    }
