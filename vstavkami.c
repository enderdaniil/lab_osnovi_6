#include <stdio.h>

using namespace std;

int main()
{
	int i, j, b;
	int const k = 6;
	int a[k];

	printf("Vvedite massiv\n");
	for (i = 0; i < k; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 1; i < k; i++)
	{
		for (j = i; j > 0 && a[j] < a[j - 1]; j--)
		{
			b = a[j - 1];
			a[j - 1] = a[j];
			a[j] = b;
		}
	}

	for (i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;

}
