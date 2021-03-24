#include <iostream>
using namespace std;

void check(int arr[], int check[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j] && check[j] == 1)
			{
				check[i]++;
				check[j] = 0;
			}
		}
	}
}

void writeArray(int arr[], int check[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		check[i] = 1;
	}
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << '\t';
	}
}

void printMaxFrequent(int arr[], int check[], int n)
{
	int vt = 0;
	int max = check[0];
	for (int i = 0; i < n; i++)
	{
		if (check[i] > max)
		{
			max = check[i];
			vt = i;
		}
	}
	cout << arr[vt];
}
int main()
{
	int n;
	cin >> n;
	int arr[200000], frequent[200000];
	writeArray(arr, frequent, n);
	check(arr, frequent, n);
	printArray(frequent, n);
	cout << endl;
	printMaxFrequent(arr, frequent, n);
	
}