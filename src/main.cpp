#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	while (cin >> n) {
		if (0 == n) {
			break;
		}

		for (auto i = 0; i < n; ++i) {
			for (auto j = 0; j <= i; ++j) {
				cout << '*';
			}
			cout << '\n';
		}
	}

	return 0;
}