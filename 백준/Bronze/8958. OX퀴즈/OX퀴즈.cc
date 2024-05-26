#include<iostream>
#include<string>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
	int n, answer = 0;
	std::cin >> n;
	for (int i = 1; i <= n; ++i) {
		int  sum = 0;
		int cnt = 0;
		std::string str;
		std::cin >> str;
		for (int j = 0; j < str.length(); ++j) {
			if (str[j] == 'O') {
				++cnt;
				sum += cnt;
			}
			else if (str[j] == 'X') {
				cnt = 0;
				sum += cnt;
			}
		}
		std::cout << sum << '\n';
	}
}