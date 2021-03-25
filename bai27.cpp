#include <iostream>
using namespace std;

int main()
{
	string number[] = {"khong", "mot", "hai", "ba", "bon", "nam", 
					 "sau", "bay", "tam", "chin"};
	int n;
	cin >> n;
	if (n >= 0 && n <= 9)
		cout << number[n];

}
