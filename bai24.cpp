#include <iostream>
using namespace std;

long factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int m, n;
    while (true)
    {
        cin >> m;
        cin >> n;
        if (m == -1 && n == -1)
            break;
        cout << factorial(m) / (factorial(n) * (factorial(m - n))) << endl;
    }
}