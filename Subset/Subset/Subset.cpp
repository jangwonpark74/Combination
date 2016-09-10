#include <stdio.h>

int arr[4];
int visited[4];
int arr_size = 4; 

void powerset(int n)
{
	if (n == arr_size)
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
		powerset(n + 1);
		arr[n] = 0;
		powerset(n + 1);
	}
}

int main()
{
	powerset(0);
	return 0;
}