#include <stdlib.h>
#include <stdio.h>

double a = 12;
double b = 7;
double resultat;

int main()
{
	resultat = (a + b) / 2;
	printf("La moyenne de %.2f et %.2f est égale à %.2f.\n", a, b, resultat);
	exit(0);
}
