#include <iostream>
using namespace std;

int main()
{
	int n;
	double min, max, temp;
	cin >> n;
	cin >> temp;
	max = temp;
	min = temp;
	n--;
	while (n)
	{
		cin >> temp;
		if (temp > max)
			max = temp;
		if (temp < min)
			min = temp;
		n--;
	}
	cout << max << endl << min;
}