#include <iostream>
using namespace std;

int computeGcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return computeGcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (a % b != 0)
        cout << a / computeGcd(a, b) << "/" << b / computeGcd(a, b);
    else
        cout << a / b;
    
}