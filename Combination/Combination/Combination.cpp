#include <stdio.h>

int select[6]; 
int visited[6];
int cnt;

void combination(int arr[], int n, int r, int t)
{
	if (r == 0)
	{
		printf("[%d] ", cnt++);
		for (int i = 1; i <=t; i++)
		{
			if(visited[i] == 1)
			printf("%d ", select[i]);
		}

		printf("\n");
	}
	else if (n < r)
	{
		return;
	}
	else if (t == n)
	{
		return;
	}
	else
	{
		visited[r] = 1;
		select[r] = arr[t];
		combination(arr, n - 1, r - 1, t+1);
		combination(arr, n - 1, r, t+1);
	}

}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9 };

	int n = sizeof(arr) / sizeof(arr[0]);

	for (int k = 1; k <= 5; k++)
	{
		cnt = 1;
		printf(" 5C%d example\n", k);
		combination(arr, n, k, 0);
		printf("\n\n");
	}

	return 0;
}