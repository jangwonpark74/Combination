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

int main()
{
	int arr[4];
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	powerset(arr, 0, arr_size);
	return 0;
}