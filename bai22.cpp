#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	float n = 3;
	vector <float> point;
	while (true)
	{
		cin >> n;
		if (n >= 0 && n <= 10)
			point.push_back(n);
		if (n < 0)
			break;
	}
	float sum;
	int m = point.size();
	for (int i = 0; i < m; i++)
	{
		sum += point[i];
	}
	cout << fixed << showpoint << setprecision(2);
	cout << sum / m;
}