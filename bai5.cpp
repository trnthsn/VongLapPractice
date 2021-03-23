#include <iostream>
#include <iomanip>
using namespace std;

void convert(int Ftemperature)
{
	float Ctemperature, Ktemperature;
	Ctemperature = (float(Ftemperature) - 32) * 5 / 9;
	Ktemperature = float(Ctemperature) + 273.15;
	cout << Ftemperature << " " ;
	cout << fixed << showpoint << setprecision(2) << Ctemperature << " " << Ktemperature << endl;
}

int main()
{
    int Ftemperature;
    cin >> Ftemperature;
    convert(Ftemperature);
}