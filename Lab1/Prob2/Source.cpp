#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	char s[100];
	char* p;
	char* cuv;
	char m[20][100];
	int n = 0;
	char aux[100];

	scanf_s("%[^\n]", s, sizeof(s));

	p = strtok_s(s, " ", &cuv);

	while (p != NULL)
	{
		strcpy_s(m[n], sizeof(m[n]), p);
		p = strtok_s(NULL, " ", &cuv);
		n++;
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strlen(m[i]) < strlen(m[j]))
			{
				strcpy_s(aux, sizeof(aux), m[i]);
				strcpy_s(m[i], sizeof(m[i]), m[j]);
				strcpy_s(m[j], sizeof(m[j]), aux);
			}
			else if (strlen(m[i]) == strlen(m[j]))
			{
				if (_stricmp(m[i], m[j]) > 0)
				{
					strcpy_s(aux, sizeof(aux), m[i]);
					strcpy_s(m[i], sizeof(m[i]), m[j]);
					strcpy_s(m[j], sizeof(m[j]), aux);
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf("%s\n", m[i]);
	return 0;
}