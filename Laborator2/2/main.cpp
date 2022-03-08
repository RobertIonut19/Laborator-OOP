#include <iostream>
#include "Student.h"
#include "GlobalFunctions.h"
using namespace std;

int main()
{
	student stud1;
	student stud2;

	char name_1[30] = "John", name_2[30] = "Darius";

	stud1.SetName(name_1);
	stud2.SetName(name_2);
	stud1.SetEngGrade(7.0);
	stud1.SetHisGrade(2.5);
	stud1.SetMathGrade(7.25);
	stud2.SetEngGrade(2.0);
	stud2.SetMathGrade(8.5);
	stud2.SetHisGrade(9.25);

	stud1.GetName();
	stud2.GetName();
	
	globalFunctions gf;
	gf.compareName(stud1, stud2);
	cout << '\n';
	gf.compareAvg(stud1, stud2);
	cout << '\n';
	gf.compareMath(stud1, stud2);
	cout << '\n';
	gf.compareEng(stud1, stud2);
	cout << '\n';
	gf.compareHis(stud1, stud2);
	cout << '\n';

	return 0;
}