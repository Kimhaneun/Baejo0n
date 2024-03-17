#include<iostream>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

	int mx = 0;
	int input, count = 0;

	for (int i = 0; i < 9; i++) {
		std::cin >> input;
		if (mx < input) {
			mx = input;
			count = i + 1;
		}
	}

	std::cout << mx << "\n" << count;
}