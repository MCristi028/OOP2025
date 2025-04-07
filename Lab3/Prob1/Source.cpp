#include "Math.h"
#include <stdlib.h>
#include <stdio.h>
int main()
{
	Math nr1;
	Math nr2;
	
	printf("adunarea a 2 nr este: %d \n", nr1.Add(5, 39) );
	printf("adunarea a 3 nr este: %d \n", nr1.Add(5, 39,21));
	printf("inmultirea a 2 nr este: %d \n", nr1.Mul(2,4));
	printf("inmultirea a 3 nr este: %d \n", nr1.Mul(2,3,4));
	printf("adunare %d \n", nr1.Add(8, 1, 2, 3, 4, 5, 6, 7, 8));
	printf("adunare char %s", nr1.Add("90", "12"));

}