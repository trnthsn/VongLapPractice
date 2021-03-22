#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool checkPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int sumDivisor(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i;
    }
    return sum;
}

bool checkPerfectNum(int number)
{
    if (number == sumDivisor(number))
        return true;
    return false;
}

bool checkSquareNum(int number)
{
    if (int(sqrt(number)) * int(sqrt(number)) == number)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    	if (checkPrime(i))
    		cout << i << " ";
    cout << endl;	
    for (int i = 2; i <= n; i++)
    	if (checkPerfectNum(i))
    		cout << i << " ";
    cout << endl;
    for (int i = 2; i <= n; i++)
    	if (checkSquareNum(i))
    		cout << i << " ";
}