#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h;
	cin >> m;

	if (45 <= m) // 만약 분이 45보다 크거나 같으면
	{
		m = m - 45; // 분을 45 뺀다
		cout << h << " " << m;
	}

	else // 만약 분이 45보다 작으면 
	{
		m = m + 15; // 분 -45 +60 = +15!! 
		if (h <= 0) //만약 뺀 시간이 0시 아래라면
		{
			h = 24; // 시간을 24시로 만든다
		}
		h = h - 1; // 시간을 1 뺀다
		cout << h << " " << m;
	}
}