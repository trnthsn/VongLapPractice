#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n)
    {
    	int count = 0;
        vector<int> divisor;
        int temp, num;
        cin >> temp;
        num = temp;
        while(temp)
        {
        	divisor.push_back(temp % 10);
        	temp /= 10;
        }
        for (int i = 0; i < divisor.size(); i++)
        {
        	if (divisor[i] > 0 && num % divisor[i] == 0)
        		count++;
        }
        cout << count << endl;
        n--;
    }
}