// ex 20 loop practice
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    float a[5];
    float sum;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
    	sum += a[i];
    }
    cout << fixed << showpoint << setprecision(2);
    cout << sum / 5;
}