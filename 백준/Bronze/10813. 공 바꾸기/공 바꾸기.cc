#include<iostream>

int main() {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
	int n, m, a, b;
	int arr[100];

	std::cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		arr[i] = i;
	}

	for (int j = 1; j <= m; ++j) {
		std::cin >> a >> b;

		int temp;
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;

		/*arr[a] ^= arr[b];
		arr[b] ^= arr[a];
		arr[a] ^= arr[b];*/
	}

	for (int k = 1; k <= n; ++k) {
		std::cout << arr[k] << ' ';
	}
}