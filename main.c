#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int var1;
	int var2;
	char choix;
	printf("Bonjour, choisissez un opérateur parmi: +, -, *, /, %%.\n");
	scanf("%c", &choix);
	printf("Choisissez maintenant un premier nombre");
	scanf("%d", var1);
	printf("Choisissez un second nombre.");
	scanf("%d", var2);
	return 0;
}