#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i = 0;
    int a[10000];
    long long n;
    cin >> n;
    n = abs(n);
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
    }
}