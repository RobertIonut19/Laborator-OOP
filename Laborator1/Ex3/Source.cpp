#define _CRT_SECURE_NO_DEPRECATE
#define MAX_LENGHT 100

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iostream>

void Swap(char s1[], char s2[])
{
	char aux[MAX_LENGHT];
	strcpy(aux, s1);
	strcpy(s1, s2);
	strcpy(s2, aux);
}
int main()
{
	char strings[MAX_LENGHT][MAX_LENGHT], aux[MAX_LENGHT], str[MAX_LENGHT* MAX_LENGHT];

	scanf("%[^\n]s", str);
	char* p = strtok(str, " ");
	int i = 0;
	int lenght1, lenght2;
	while (p)
	{
		strcpy(strings[i++], p);
		p = strtok(NULL, " ");
	}
	int n = i-1;
	bool ok = 0;
	while (!ok)
	{
		ok = 1;
		for (int i = 0; i < n; ++i)
			for (int j = i + 1; j <= n; ++j)
			{
				lenght1 = strlen(strings[i]);
				lenght2 = strlen(strings[j]);
				if (lenght2 > lenght1)
				{
					Swap(strings[i], strings[j]);
				}
				else if(lenght1 == lenght2)
				{
					bool afara = false;
					for (int z = 0; strings[i][z] && afara == false;)
						if (strings[i][z] == strings[j][z])
							z++;
						else if (strings[i][z] > strings[j][z] || strings[j][z] == NULL)
						{
							afara = true;
							Swap(strings[i], strings[j]);
						}
						else afara = true;
				}
			}

	}
	for (i = 0; i <= n; ++i)
	{
		printf("%s", strings[i]);
		std::cout << '\n';
	}
	
	return 0;
}