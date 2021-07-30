#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m, x, y, a, b;
		cin >> n >> m >> x >> y >> a >> b;
		// calculate the distance of the thief using right or down moves
		int thief_distance = (n - x) + (m - y);
		// calculate the distance of the police by using the (right + down) and remaining moves
		// minimum(right moves, down moves) = (right + down moves)
		int police_distance = (n - a) + (m - b) - min(n - a, m - b); // (probability: sum rule)
		cout << (thief_distance <= police_distance ? "YES" : "NO") << '\n';
	}
	return 0;
}
