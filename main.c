#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int nombre1;
	int nombre2;
	double resultat;
	char operateur;
	printf("Bonjour, choisissez un opérateur parmi: +, -, *, /, %%.\n");
	scanf("%c", &operateur);
	printf("Choisissez maintenant un premier nombre\n");
	scanf("%d", &nombre1);
	printf("Choisissez un second nombre.\n");
	scanf("%d", &nombre2);
	if (operateur == '+')
	{
		printf("Addition\n");
		resultat = nombre1 + nombre2;
		printf("%d %c %d = %.2f \n", nombre1, operateur, nombre2, resultat);
	}
	else if (operateur == '-')
	{
		printf("Soustraction\n");
		resultat = nombre1 - nombre2;
		printf("%d %c %d = %.2f\n", nombre1, operateur, nombre2, resultat);
	}
	else if (operateur == '*')
	{
		printf("Multiplication\n");
		resultat = nombre1 * nombre2;
		printf("%d %c %d = %.2f\n", nombre1, operateur, nombre2, resultat);
	}
	else if (operateur == '/')
	{
		printf("Division\n");
		if (nombre2 != 0)
		{
			resultat = (float)nombre1 / nombre2;
			printf("%d %c %d = %.2f\n", nombre1, operateur, nombre2, resultat);
		}
		else
		{
			printf("On ne peut pas diviser par 0.\n");
		}
		
	}
	else if (operateur == '%')
	{
		printf("Modulo\n");
		if (nombre2 != 0)
		{
			resultat = nombre1 % nombre2;
			printf("%d %c %d = %.2f\n", nombre1, operateur, nombre2, resultat);
		}
		else
		{
			printf("On ne peut pas diviser par 0.\n");
		}

	}
	else
	{
		printf("L'operateur n'est pas reconnu.\n");
	}


	return 0;
}