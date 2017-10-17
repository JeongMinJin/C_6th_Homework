#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;
	int i;

	printf("Exit : Ctrl + z\n");

	while((ch = getchar()) != EOF){

		for(i = 0; i < ch-48; i++)
			printf("%c", ch);

		printf("\n");

	}

	return 0;
}