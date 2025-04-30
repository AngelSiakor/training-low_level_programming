#include <stdio.h>
#include "main.h"
#include <string.h>


void rev_string(char *s)
{

	int len = strlen(s);
	char a;
	int i;

	for (i = 0; i < len / 2; i++)
	{
		a = s[i];
		s[i] = s[len - i -1];
		s[len - i - 1] = a;
	}
}

