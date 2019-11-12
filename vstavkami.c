#include <stdio.h>

int main()
{

	int i, j, x;
	const int k = 6;
	int a[k];

	printf("Vvedite massiv\n");
	for (i = 0; i < k; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < k; i++)
	{
		x = a[i];
		for (j = i; j > 0 && x < a[j - 1]; j--)
		{
			a[j] = a[j - 1];
		}
		a[j] = x;
	}

	for (i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;

}
