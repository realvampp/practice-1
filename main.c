#include <stdio.h>
#include <locale.h>
#include "projection.h"

int main() {
	setlocale(LC_CTYPE, "rus");
	int x, y, z, xa, ya, za, v, M[3];
	printf("Введите координаты точки:\n x=");
	scanf_s("%i", &x);
	printf("y=");
	scanf_s("%i", &y);
	printf("z=");
	scanf_s("%i", &z);
	printf("Введите число при x: ");
	scanf_s("%i", &xa);
	printf("при y: ");
	scanf_s("%i", &ya);
	printf("при z: ");
	scanf_s("%i", &za);
	printf("Введите свободный член: ");
	scanf_s("%i", &v);
	coordinati(x, y, z, xa, ya, za, v, M);
	printf("Координаты проекции данной точки на данную плоскость: (%i,%i,%i)", M[0], M[1], M[2]);
	return 0;
}