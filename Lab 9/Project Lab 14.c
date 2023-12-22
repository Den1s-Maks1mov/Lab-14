#include "stdio.h"
#include "limits.h"
#define max_el 6
int main()
{
	// Введення кількості елементів
	int n, riznica;
	printf("Vvedit kilkist elementiv masivu, ne bilse %d: ", max_el);
	scanf_s("%d", &n);
	// Ініціалізація покажчиків та масиву
	int array[max_el];
	int* minim;
	int* maxim;
	n -= 1;
	// Введення самих елементів
	printf("Vvedit elementi masivu : \n ");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &array[i]);
	}
	// Ініціалізація покажчиків
	minim=&array[0];
	maxim=&array[0];
	// Обраховування середнього значення
	for (int i = 1; i < n; i++)
	{
		if (*minim > array[i])
		{
			minim = &array[i];
		}
		if (*maxim < array[i])
		{
			maxim = &array[i];
		}
	}
	riznica = abs(maxim - minim);
	printf("\nVidstan mig maximalnim ta minimalnim: %d ", riznica);
}