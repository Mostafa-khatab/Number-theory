vector<ll> primeFactors(ll n) {
    vector<ll> ret;
    for (int i = 2; (i * i) <= n; i += (1 + (i & 1))) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                ret.pb(i);
            }
        }
    }
    if (n > 1)
        ret.pb(n);
    return ret;
}
