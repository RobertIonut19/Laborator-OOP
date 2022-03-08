#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;

void student::SetName(char* Name) {
	strcpy_s(this->name, Name);
}
void student::GetName() {
	cout << name << '\n';
}
void student::SetMathGrade(double x) {
	mathGrade = x;
}
void student::GetMathGrade() {
	cout << "Math grade of student: " << name << " is: " << mathGrade;
}
void student::SetEngGrade(double x) {
	engGrade = x;
}
void student::GetEngGrade() {
	cout << "English grade of student: " << name << " is: " << engGrade;
}
void student::SetHisGrade(double x) {
	hisGrade = x;
}
void student::GetHisGrade() {
	cout << "History grade of student: " << name << " is: " << hisGrade;
}
void student::GetAvg() {
	cout << "Average grade of student: " << name << " is: " << (mathGrade + hisGrade + engGrade)/3;
}