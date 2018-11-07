#include <stdio.h>
#include <stdlib.h>

void staticArrayInit();
void automaticArrayInit();

int main()
{
	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");
	system("pause");
	return 0;
}

void staticArrayInit()
{
	static int array1[3];
	int i;

	printf("\nValues on entering staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d]=%d  ", i, array1[i]);

	printf("\nValues on exiting staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d]=%d  ", i, array1[i] += 5);
}

void automaticArrayInit()
{
	int array2[3] = { 1,2,3 };
	int i;

	printf("\n\nValues on entering automicArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ",i, array2[i]);

	printf("\nValues on exiting automicArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ",i, array2[i] += 5);
}