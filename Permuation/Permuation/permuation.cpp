#include <iostream>

int arr[] = { 1, 2, 3, 4, 5};
int arr_size = 0;

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

void permutate(int s, int e)
{
	if (s == e+1)
	{
		for (int i = 0; i<s; i++)
			printf("%d ", arr[i]);
		printf("\n");
		return;
	}
	else
	{
		for (int i = s; i <= e; i++)
		{
			swap(arr[s], arr[i]);
			permutate(s + 1, e);
			swap(arr[s], arr[i]);
		}
	}

}

int main()
{
	arr_size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 1; i < 5; i++)
	{
		printf("permutation from %d to %d\n", 0, i);
		permutate(0, i);
		printf("\n\n");
	}
	return 0;
}