#include <iostream>
#include <cmath>
using namespace std;

long long UCLN(long long a, long long b)
{
    if(a == b) return a;
    if(a > b)
        UCLN(a - b, b);
    else
        UCLN(a, b - a);
}
long long bcnn(long long a, long b)
{
    return (a * b) / UCLN(a, b);
}



int main()
{
    long long a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    if (a != 0 && b != 0 )
        cout << bcnn(a, b);
    else
        cout << 0;
}