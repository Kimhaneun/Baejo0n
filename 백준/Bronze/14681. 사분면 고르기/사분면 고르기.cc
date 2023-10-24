#include <iostream>
using namespace std;

int main() {
	int x, y, n;
	cin >> x;
	cin >> y;
	 
	if (0 < x && 0 < y) // 양 양
	{
		cout << "1";
	}
	else if (0 > x && 0 < y) // 음 양
	{
		cout << "2";
	}
	else if (0 > x && 0 > y) // 음 음
	{
		cout << "3";
	}
	else if (0 < x && 0 > y) // 양 음
	{
		cout << "4";
	}
}