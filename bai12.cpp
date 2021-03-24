#include <iostream>
using namespace std;


bool checkIsPrime(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int n;
	cin >> n;
	if (checkIsPrime(n))
		cout << "YES";
	else
		cout << "NO";
}