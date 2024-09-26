#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	double var1;
	double var2;
	double resultat;
	char choix;
	printf("Bonjour, choisissez un opérateur parmi: +, -, *, /, %%.\n");
	scanf("%c", &choix);
	printf("Choisissez maintenant un premier nombre\n");
	scanf("%.2f", &var1);
	printf("Choisissez un second nombre.\n");
	scanf("%.2f", &var2);
	if (choix == '+')
	{
		printf("Addition\n");
		resultat = var1 + var2;
	}
	else if (choix == '-')
	{
		printf("Soustraction\n");
		resultat = var1 - var2;
	}
	else if (choix == '*')
	{
		printf("Multiplication\n");
		resultat = var1 * var2;
	}
	else if (choix == '/')
	{
		printf("Division\n");
		if (var2 == 0)
		{
			resultat = var1 / var2;
		}
		else
		{
			printf("On ne peut pas diviser par 0.\n")
		}
		
	}
	else if (choix == '%')
	{
		printf("Modulo\n");
		if (var2 == 0)
		{
			resultat = var1 % var2;
		}
		else
		{
			printf("On ne peut pas diviser par 0.\n")
		}

	}
	else
	{
		printf("L'operateur n'est pas reconnu.\n");
	}


	return 0;
}