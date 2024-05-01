#include<iostream>
#include<algorithm>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

	int n;
	int arr[1000000];

	std::cin >> n;

	for (int i = 0; i < n; ++i)
		std::cin >> arr[i];

	std::sort(arr + 0, arr + n);

	std::cout << arr[0] << ' ' << arr[n - 1];
}