#include <stdio.h>

class item {
private:
	int visited;
	int value;
public:
	item() {}
	item(int visited_, int value_) : visited(visited_), value(value_) {};
	int isVisited() { return visited; };
	void init() { visited = 0; value = 0; };
	int getValue() { return value; };
};

int cnt;

void combination(int arr[], int n, int r, int t, item select[])
{
	if (r == 0)
	{
		printf("[%d] ", cnt++);
		for (int i = 1; i <= t; i++)
		{
			if (select[i].isVisited())
				printf("%d ", select[i].getValue());
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
		select[r] = item(1, arr[t]);
		combination(arr, n - 1, r - 1, t+1, select);
		combination(arr, n - 1, r, t+1, select);
	}

}

void init(item Arr[])
{
	for (int i = 0; i < 10; i++)
		Arr[i] = item(0, 0);
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9 };

	int n = sizeof(arr) / sizeof(arr[0]);

	item select[10];
	init(select);
	
	for (int k = 1; k <= 5; k++)
	{
		cnt = 1;
		printf(" 5C%d example\n", k);
		combination(arr, n, k, 0, select);
		printf("\n\n");

		init(select);
	}
	return 0;
}