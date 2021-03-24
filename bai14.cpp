// bài 14
#include <iostream>
using namespace std;

void printTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i - 1); j++)
        {
            cout << "*";
        }
        for (int j = i - 1; j < n - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printTriangle(n);
}