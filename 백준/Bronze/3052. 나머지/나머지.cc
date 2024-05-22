#include<iostream>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

	int arr[42] = { 0 };
	int n;

	for (int i = 0; i < 10; ++i) {
		std::cin >> n;
		arr[n % 42]++;
	}

	n = 0;
	// for (int i = 0; i < 42; ++i)
	for (int i : arr) {
		if (i > 0)
			n++;
	}

	std::cout << n;
}