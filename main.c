#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int var1;
	int var2;
	char choix;
	printf("Bonjour, choisissez un opérateur parmi: +, -, *, /, %%.\n");
	scanf("%c", &choix);
	printf("Choisissez maintenant un premier nombre\n");
	scanf("%d", &var1);
	printf("Choisissez un second nombre.\n");
	scanf("%d", &var2);
	if (choix == '+')
	{
		printf("Addition\n");
	}
	else if (choix == '-')
	{
		printf("Soustraction\n");
	}
	else if (choix == '*')
	{
		printf("Multiplication\n");
	}
	else if (choix == '/')
	{
		printf("Division\n");
	}
	else if (choix == '%')
	{
		printf("Modulo\n");
	}
	else
	{
		printf("L'operateur n'est pas reconnu.\n");
	}


	return 0;
}