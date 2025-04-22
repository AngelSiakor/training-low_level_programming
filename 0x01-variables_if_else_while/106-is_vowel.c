#include <stdio.h>


int is_vowel(char c)
{
	if(c == 65 || c == 69 || c == 73 || c == 79 || c == 85 || c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
		return(1);

	else
	return (0);
	
}

int is_vowel(char c);

int main()
{
	printf("%d\n", is_vowel('A'));
	printf("%d\n", is_vowel('z'));

	return (0);
}
	
