#include <iostream>

using namespace std;

long long min(long long a, long long b) {
	return a > b ? b : a;
}

pair<long, long> solution(long long n) {
	long long two = 0;
	long long five = 0;
	for (long long i = 2; i <= n; i *= 2) {
		two += n / i;
	}
	for (long long i = 5; i <= n; i *= 5) {
		five += n / i;
	}
	return pair<long, long>(two, five);
}

int main() {

	int n, m;

	cin >> n >> m;

	pair<long, long> a = solution(n);
	pair<long, long> b = solution(m);
	pair<long, long> c = solution(n - m);

	long long aa = a.first - b.first - c.first;
	long long bb = a.second - b.second - c.second;

	cout << min(aa, bb);

}