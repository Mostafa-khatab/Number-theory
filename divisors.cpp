vector <ll> divisors(ll n) {

    vector <ll> res;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res.pb(i);
            if (n / i != i)
                res.pb(n / i);
        }
    }

    sort(all(res));
    return res;
}
