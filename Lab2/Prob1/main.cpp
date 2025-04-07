#include <stdio.h>
#include "NumberList.h"

int main( )
{
	NumberList x;
	x.Init();

	x.Add(8);
	x.Add(21);
	x.Add(44);
	x.Add(3);
	x.Add(6);

	x.Print();

	x.Sort();

	x.Print();


	return 1;
}