#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		
		// test case:
		// n = 11
		
		// simulation:
		// 0 3 0
		// 0 3 4
		// 4 3 4
		
		// 0 4 0
		// 0 4 3
		// 4 4 3
		
		// 0 5 0
		// 0 5 3
		// 3 5 3
		// 4 5 2
		
		// a started at 3, so that b and c would be 2 and 1, respectively
		for (int a = 3; a < n; a++) {
			int c = (n - a) / 2;
			int b = n - a - c;
			if (c > 1 && b + 1 < a) {
				c--;
				b++;
			}
			if (a > b && b > c) {
				cout << b << " " << a << " " << c << '\n';
				break;
			}
		}
	}
	return 0;
}
