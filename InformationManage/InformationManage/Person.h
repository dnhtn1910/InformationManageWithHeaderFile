#pragma once
#include<iostream>
using namespace std;
class Person
{
private:
	string name;
	int age;
	string address;
public:
	Person(string name, int age, string address);
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void setAddress(string address);
	string getAddress();
	void display();
};

