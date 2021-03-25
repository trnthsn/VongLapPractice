#include <iostream>
using namespace std;


int main()
{
	long long n;
	cin >> n;
	long long tong = 0;
	while (n)
	{
		tong += n % 10;
		n /= 10;
	}
	cout << tong;
	return 0;
}