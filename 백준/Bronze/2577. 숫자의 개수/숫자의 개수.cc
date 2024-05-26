#include<iostream>
#include<string>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

	int input, multiply = 1;
	int arr[10] = {0};
	std::string str;

	for (int i = 0; i < 3; ++i) {
		std::cin >> input;
		multiply *= input;
	}

	str = std::to_string(multiply);

	for (int i = 0; i < str.size(); ++i)
	{
		arr[str[i] - '0']++;
	}

	for (int i : arr) {
		std::cout << i << '\n';
	}
}