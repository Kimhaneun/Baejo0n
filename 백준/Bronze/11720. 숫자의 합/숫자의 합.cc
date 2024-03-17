#include<iostream>
#include<string>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

	std::string str;
	int n, sum = 0;

	std::cin >> n;
	std::cin >> str;

	for (int i = 0; i < n; i++) {
		sum += str[i] - '0';
	}

	std::cout << sum;
}