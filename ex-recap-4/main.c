#include <stdlib.h>
#include <stdio.h>

double a = 30;
double b = 34;
double c = 62;
double resultat;

int main()
{
	resultat = (a + b + c) / 3;
	printf("La moyenne de %.2f, %.2f et %.2f est égale à %.2f.\n", a, b, c, resultat);
	exit(0);
}
