#include <stdio.h>
#include "NumberList.h"

int main()
{
	NumberList d;
	d.Init();

	d.Add(4);
	d.Add(3);
	d.Add(2);
	d.Add(1);
	d.Sort();
	d.Print();
	printf("%s", "\n");

	d.Add(0);
	d.Add(5);
	d.Sort();
	d.Print();

	return 0;
}

