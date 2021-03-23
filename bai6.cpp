#include <iostream>
using namespace std;

int main()
{
	int temp;
	int n;
	cin >> n;
	temp = n;
	while (n >= 0)
	{
		cin >> n;
		if (n != temp)
			cout << temp << " ";
		if (n == temp)
			continue;
		temp = n;
	}
	cout << n;
}