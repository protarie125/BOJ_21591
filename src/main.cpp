#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int wc, hc, ws, hs;
	cin >> wc >> hc >> ws >> hs;

	if (wc < ws + 2 || hc < hs + 2) {
		cout << 0;
		return 0;
	}

	cout << 1;
	return 0;
}