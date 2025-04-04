#include <stdio.h>

using namespace std;

int sumanr(char* line)
{
	int s = 0;
	int i = 0;

	while (line[i] >= '0' and line[i] <= '9')
	{
		s = s * 10 + (line[i] - '0');
		i++;
	}
	return s;
}

int main()
{
	FILE* file;
	int err;

	err = fopen_s(&file, "in.txt", "r");

	if (err)
	{
		perror("Error opening file");
		return 1;
	}

	char line[100];
	int sum = 0;

	while (fgets(line, sizeof(line), file))
	{
		sum += sumanr(line);
	}

	fclose(file);

	printf("Suma numerelor este %d\n", sum);

	return 0;
}