#include<iostream>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
	float n;
	float answer = 0, max = -1;
	float sum = 0;
	float arr[1001] = { 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	answer = (sum / max * 100.0) / n;
	std::cout << answer;
}