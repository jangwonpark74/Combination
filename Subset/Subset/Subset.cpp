#include <stdio.h>

void powerset(int arr[],int n, int max)
{
	if (n == max)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	else
	{
		
		arr[n] = 1;
		powerset(arr, n + 1, max);
		arr[n] = 0;
		powerset(arr, n + 1, max);
	}
}

void subset()
{
	int i, j;
	int arr[] = { 3, 6, 7, 1, 5, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < (1 << n); i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i & (1 << j))
				printf("%d ", arr[j]);
		}
		printf("\n"); 
	}
}

int main()
{
	int arr[5];
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("\n# powerset(1) #\n");
	powerset(arr, 0, arr_size);

	printf("\n# powerset(2) #\n");
	subset();
	return 0;
}