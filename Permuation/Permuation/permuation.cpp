#include <iostream>

int arr[] = { 1,2,3,4,5 };
int arr_size = 0;

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

void permutate(int s, int e)
{
	if (s == e)
	{
		for (int i = 0; i<arr_size; i++)
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

	printf("arr_size = %d\n", arr_size);

	permutate(0, arr_size - 1);

	return 0;
}