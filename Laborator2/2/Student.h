#ifndef student
#pragma once
class student {
	char name[50];
	double mathGrade, engGrade, hisGrade, avg;
public:
	void SetName(char* name);
	void GetName();
	void SetMathGrade(double x);
	void GetMathGrade();
	void SetEngGrade(double x);
	void GetEngGrade();
	void SetHisGrade(double x);
	void GetHisGrade();
	void GetAvg();
	friend class globalFunctions;
};
#endif