#define _CRT_SECURE_NO_DEPRECATE
#define NRMAXCIFRE 10

#include <stdio.h>
#include <stdlib.h>

int Atoi(char s[])
{
	int nr = 0;
	for (int i = 0; s[i+1]; ++i)
		nr = nr*10 + (s[i] - '0');
	return nr;
}
int main()
{
	FILE* f;
	f = fopen("Input.txt", "r");
	int sum = 0;
	char data[NRMAXCIFRE];
	if (f != NULL)
	{
		while (fgets(data, NRMAXCIFRE, f))
		{
			int nr = atoi(data);
			sum += nr;
		}
	}
	printf("%d", sum);
	return 0;
}
