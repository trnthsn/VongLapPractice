#include <iostream>

using namespace std;

void fillFibo(int *fibo)
{
	fibo[0] = 1;
	fibo[1] = 1;
	for (int i = 2; i < 100; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}

bool check(int n, int *fibo)
{
	for (int i = 0; i < 100 ; i ++)
	{
		if (fibo[i] == n)
			return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int fibo[100];
	fillFibo(fibo);
	int n ;
	cin >> n;
	if (check(n, fibo))
		cout << "Thuoc day Fibonacci" << endl;
	else
		cout << "Khong thuoc day Fibonacci" << endl;
	for (int i = 0; fibo[i] <= n; i++)
	{
		cout << fibo[i] << " ";
	}
	return 0;
}