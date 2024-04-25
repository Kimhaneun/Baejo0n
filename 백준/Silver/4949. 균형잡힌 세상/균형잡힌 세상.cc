#include<iostream>
#include<string>
#include<stack>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);

	while (true)
	{
		std::stack<char> st;
		std::string str;

		getline(std::cin, str);

		if (str.front() == '.')
			break;

		for (int i = 0; i < str.length(); ++i) {

			if (str[i] == '(' || str[i] == '[') {
				st.push(str[i]);
			}
			else if (str[i] == ')') { 
				if (!st.empty() && st.top() == '(')
					st.pop();
				else // empty
				{
					st.push(str[i]);
					break;
				}
			}

			else if (str[i] == ']') {
				if (!st.empty() && st.top() == '[')
					st.pop();
				else // empty
				{
					st.push(str[i]);
					break;
				}
			}
		}

		if (st.empty())
			std::cout << "yes" << '\n';
		else
			std::cout << "no" << '\n';

		if (str.back() == '.')
			continue;
	}
}