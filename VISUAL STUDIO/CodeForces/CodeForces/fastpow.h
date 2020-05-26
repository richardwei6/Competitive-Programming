#define ll long long
// if you take the mod of a big number, make sure to add mod to end of it in order to prevent it from going negative


ll bigPow(ll x, ll n, ll M) {
	if (n < 0) {
		return bigPow(1 / x, -n, M)%M;
	}
	else if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else if (n % 2 == 0) {
		return bigPow((x * x)%M, n / 2, M)%M;
	}
	else if (n % 2 != 0) {
		return (x * bigPow((x * x)%M, (n - 1) / 2, M))%M;
	}
}

ll bigPow(ll x, ll n) {
	if (n < 0) {
		return bigPow(1 / x, -n);
	}
	else if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else if (n % 2 == 0) {
		return bigPow((x * x), n / 2);
	}
	else if (n % 2 != 0) {
		return (x * bigPow((x * x), (n - 1) / 2));
	}
}


