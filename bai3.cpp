#include <iostream>

using namespace std;

void writeArray(int *a, int m)
{
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
}

int countCase(int *a, int m, int n)
{
	int count = 0;
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if ((a[i] + a[j]) % n == 0)
				count++;
		}
	}
	return count;
}



int main()
{
	int m, n;
	cin >> m >> n;
	int a[10000];
	writeArray(a, m);
	cout << countCase(a, m, n);
}