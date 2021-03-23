#include <iostream>
#include <iomanip>
using namespace std;

void convert(float Ftemperature)
{
	float Ctemperature, Ktemperature;
	Ctemperature = (Ftemperature - 32) * 5 / 9;
	Ktemperature = Ctemperature + 273.15;
	cout << fixed << showpoint << setprecision(2);
	cout << Ftemperature << " " << Ctemperature << " " << Ktemperature << endl;
}

int main()
{
	float min, max , step;
	cin >> min >> max >> step;
	for (float i = min; i <= max; i += step)
	{
		convert(i);
	}
}