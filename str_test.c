#include <stdio.h>
#include <string.h>

int main(void)
{
	char* s = "abcd";
	char* end = s;
	while(*end){
		printf("%c\n", *end);
		end++;
	}

	printf("the lenght of the string is : %d\n", strlen(s));
	printf("NULL is %d\n", NULL);
	return 0;
}
