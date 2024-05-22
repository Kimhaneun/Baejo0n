#include<iostream>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
	int n, m, a, b;
	int arr[101];

	std::cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		arr[i] = i;
	}

	while (m--)
	{
		std::cin >> a >> b;
		for (int i = 0; i <= (b - a) / 2; ++i) {
			std::swap(arr[a + i], arr[b - i]);
		}
	}

	for (int i = 1; i <= n; ++i) {
		std::cout << arr[i] << ' ';
	}
}