#include <iostream>

using namespace std;

typedef long long ll;

bool chk[1000001], aux[1000001];

int main() {
	ll a, b;
	scanf("%lld %lld", &a, &b);

	int ans = b - a + 1;
	for (ll i = 2; i*i <= b; i++) {
		if (aux[i]) continue;
		for (ll j = i; j*j <= b; j += i) aux[j] = 1;
		for (ll j = ((a-1)/(i*i)+1)*i*i; j <= b; j += i*i)
			if (!chk[j - a]) chk[j - a] = 1, ans--;
	}

	printf("%d", ans);

	return 0;
}