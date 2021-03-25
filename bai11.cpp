#include <iostream>
using namespace std;

void printMatrix(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        	cout << j << " ";
        for (int j = 0; j < i; j++)
        	cout << j + 1 << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printMatrix(n);
}