#include <iostream>
#include <cmath>
using namespace std;

void writeArray(int *a, int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int countAbs(int *a, int n)
{
	int count = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j ++)
			if (abs(a[i] - a[j]) <= 1)
			{
				//cout << a[i] << '\t' << a[j] << endl;
				count++;
			}
	}
	return count;
}

int main()
{
	int a[100];
	int n;
	cin >> n;
	writeArray(a, n);
	cout << countAbs(a, n);
}