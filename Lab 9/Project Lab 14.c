#include "stdio.h"
#include "limits.h"
#define max_el 6
int main()
{
	// �������� ������� ��������
	int n, riznica;
	printf("Vvedit kilkist elementiv masivu, ne bilse %d: ", max_el);
	scanf_s("%d", &n);
	// ����������� ��������� �� ������
	int array[max_el];
	int* minim;
	int* maxim;
	n -= 1;
	// �������� ����� ��������
	printf("Vvedit elementi masivu : \n ");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &array[i]);
	}
	// ����������� ���������
	minim=&array[0];
	maxim=&array[0];
	// ������������� ���������� ��������
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