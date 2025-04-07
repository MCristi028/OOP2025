w#include <stdio.h>

using namespace std;

int sumanr(char* line)
{
	int s = 0;
	int i = 0;

	while (line[i] >= '0' && line[i] <= '9')
	{
		s = s * 10 + (line[i] - '0');
		i++;
	}
	return s;
}

int main()
{
	FILE* fisier;
	int err;

	err = fopen_s(&fisier, "in.txt", "r");

	if (err)
	{
		perror("Eroare la deschiderea fisierului");
		return 1;
	}

	char line[100];
	int sum = 0;

	while (fgets(line, sizeof(line), file))
	{
		sum += sumanr(line);
	}

	fclose(fisier);

	printf("Suma numerelor este %d\n", sum);

	return 0;
}