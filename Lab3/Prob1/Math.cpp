#include "Math.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <string>

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a*b;
}

int Math::Mul(int a, int b, int c)
{
	return a*b*c;
}

int Math::Mul(double a, double b)
{
	return a*b;
}

int Math::Mul(double a, double b, double c)
{
	return a*b*c;
}

 int Math::Add(int count, ...)
 {
	 int s = 0;
	{
		va_list vl;
		va_start(vl, count);
		for (int i = 0; i < count; i++) {
			s += va_arg(vl, int);
		}
		va_end(vl);
	}
	return s;
}

char* Math::Add(const char* s1, const char* s2)
{
	if(s1==nullptr || s2==nullptr)
	return nullptr;
	int size;
	size = strlen(s1) + strlen(s2) + 1;
	char* newsir = new char[size];
	strcpy_s(newsir, size, s1);
	strcat_s(newsir, size, s2);
	return newsir;
}
