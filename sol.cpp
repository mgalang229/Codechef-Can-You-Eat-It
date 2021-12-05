#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		// n must be divisible by k
		cout << (n % k == 0 ? n / k : -1) << '\n';
	}
	return 0;
}
