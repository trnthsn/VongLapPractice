#include <iostream>

using namespace std;

void getPoint(float point[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> point[i][j];
        }
    }
}

void printArray(float point[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << point[i][j] << " ";
        }
        cout << endl;
    }
}

string check(float point[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (point[i][0] > 10 || point[i][0] < 0)
            return "Sai diem so";
        else if (   point[i][1] == 1 || point[i][1] == 1.5
                 || point[i][1] == 2 || point[i][1] == 2.5
                 || point[i][1] == 3)
            continue;
    }
    return "";
}
int main()
{
    int n;
    cin >> n;
    float point[100][2];
    getPoint(point, n);
    cout << check(point, n);
    // printArray(point, n);
}