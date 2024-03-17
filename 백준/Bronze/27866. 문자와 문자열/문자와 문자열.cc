#include<iostream>
#include<string>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

	std::string str;
	int i;

	std::cin >> str;
	std::cin >> i;

	std::cout << str[i - 1];
}