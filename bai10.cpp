#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort (arr.begin(), arr.end());
    int min = arr[1] - arr[0];
    for (int i = 0; i < n - 1; i++)
    {
    	if (arr[i + 1] - arr[i] < min)
    		min = arr[i + 1] - arr[i];
    }
    cout << min;
}