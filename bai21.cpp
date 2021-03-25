// bài 21
#include <iostream>
using namespace std;

void getPoint(float point[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> point[i][j];
            // if (point[i][0] > 10 || point[i][0] < 0)
            // {
            // 	cout << "Sai diem so";
            // 	return;
            // }
            // else if (point[i][1] != 1.0 || point[i][1] != 1.5 || point[i][1] != 2.0 || point[i][1] != 2.5 || point[i][1] != 3.0)
            // {
            // 	cout << "Sai he so";
            // 	return;
            // }
        }
    }
}

// string check(float point[][2], int n)
// {
// 	for (int i = 0; i < n; i++)
// 	{
// 		if (point[i][0] > 10 || point[i][0] < 0)
// 			return "Sai diem so";
// 		if (point[i][1] != 1.0 || point[i][1] != 1.5 || point[i][1] != 2.0 || point[i][1] != 2.5 || point[i][1] != 3.0)
// 			return "Sai he so";
// 	}
// 	return " ";
// }

int main()
{
    float point[100][2];
    int n;
    cin >> n;
    getPoint(point, n);
    //cout << check(point, n);
    for (int i = 0; i < n ; i++)
    {
        {
            if (point[i][0] > 10 || point[i][0] < 0)
            {
                cout << "Sai diem so";
                return 1;
            }
            else if (point[i][1] != 1.0 || point[i][1] != 1.5 || point[i][1] != 2.0 || point[i][1] != 2.5 || point[i][1] != 3.0)
            {
                cout <<  "Sai he so";
                return 1;
            }

        }
    }

    cout << "Tong so mon hoc can tinh DTB: " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Diem mon hoc " << i << ":" << point[i][0] << endl;
        cout << "He so mon hoc " << i << ":" << point[i][1] << endl;
    }

}