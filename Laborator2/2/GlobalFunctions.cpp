#include "GlobalFunctions.h"
#include <iostream>
#include <cstring>
using namespace std;

void globalFunctions::compareName(student s1, student s2)
{
	int result = strcmp(s1.name, s2.name);
	if (result < 0)
		cout << 1;
	else if (result == 0)
		cout << 0;
	else cout << -1;

}
void globalFunctions::compareMath(student s1, student s2) {
	double result = s1.mathGrade - s2.mathGrade;
	if (result < 0)
		cout << -1;
	else if (result == 0)
		cout << 0;
	else cout << 1;
}
void globalFunctions::compareEng(student s1, student s2) {
	double result = s1.engGrade - s2.engGrade;
	if (result < 0)
		cout << -1;
	else if (result == 0)
		cout << 0;
	else cout << 1;
}
void globalFunctions::compareHis(student s1, student s2) {
	double result = s1.hisGrade - s2.hisGrade;
	if (result < 0)
		cout << -1;
	else if (result == 0)
		cout << 0;
	else cout << 1;
}
void globalFunctions::compareAvg(student s1, student s2) {
	double result = s1.avg - s2.avg;
	if (result < 0)
		cout << -1;
	else if (result == 0)
		cout << 0;
	else cout << 1;
}
