#include<iostream>
#include<stack>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

	int n, inputNum;
	std::string str;
	std::stack<int> s;

	std::cin >> n;
	while (n--)
	{
		std::cin >> str;
		if (str == "push") {
			std::cin >> inputNum;
			s.push(inputNum);
		}
		else if (str == "pop") {
			if (!s.empty()) {
				std::cout << s.top() << '\n';
				s.pop();
			}
			else
				std::cout << -1 << '\n';
		}
		else if (str == "size")
			std::cout << s.size() << '\n';
		else if (str == "empty") {
			if (s.empty())
				std::cout << 1 << '\n';
			else
				std::cout << 0 << '\n';
		}
		else if (str == "top") {
			if (s.empty())
				std::cout << -1 << '\n';
			else
				std::cout << s.top() << '\n';
		}
	}
}