#include<iostream>
#include"Student.h"
#include"Teacher.h"

using namespace std;
int main() {
	Student s("tien", 20200528, 21, "hanoi", 1.0, 9.1);
	s.display();
	Teacher t("Hung", 35, "hanoi", 10000000);
	t.display();
}