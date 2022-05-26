#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using mint = modint1000000007;
const int mod = 1000000007;
# define ll long long
# define vi vector<int>
# define vl vector<long long>
# define vs vector<string>
# define vb vector<bool>
# define vc vector<char>
# define vvi vector<vector<int>>
# define vvl vector<vector<long long>>
# define vvb vector<vector<bool>>
# define vpi vector<pair<int, int>>
# define vpl vector<pair<ll, ll>>
# define vps vector<pair<string, string>>
# define rep(i, a, b) for(int i = a; i < b; i++)
# define srep(i, a, b) for(int i = a; i <= b; ++i)
# define ALL(obj) (obj).begin(), (obj).end()
# define rALL(obj) (obj).rbegin(), (obj).rend()
# define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
# define _GLIBCXX_DEBUG
# define Pll pair<ll, ll>
#define P pair<int,int>
template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }

struct combination {
   vector<mint> fact, ifact;
   combination(int n):fact(n+1),ifact(n+1) {
   assert(n < mod);
   fact[0] = 1;
   for (int i = 1; i <= n; ++i) fact[i] = fact[i-1]*i;
   ifact[n] = fact[n].inv();
   for (int i = n; i >= 1; --i) ifact[i-1] = ifact[i]*i;
}

mint operator()(int n, int k) {
   if (k < 0 || k > n) return 0;
   return fact[n]*ifact[k]*ifact[n-k];
  }
};


void Solve() {
    int n;
    cin >> n;
    vl x(n), y(n);
    rep(i, 0, n) cin >> x[i] >> y[i];
    set<Pll> s;
    rep(i, 0, n) s.emplace(make_pair(x[i], y[i]));
    ll ans = 0;
    rep(i, 0, n) {
        rep(j, 0, n) {
            ll xi = x[i];
            ll xj = x[j];
            ll yi = y[i];
            ll yj = y[j];
            if(xi < xj && yi < yj) {
                if(s.find(pair(xi, yj)) == s.end()) continue;
                if(s.find(pair(xj, yi)) == s.end()) continue;
                ans++;
            } 
        }
    }
    cout << ans << endl;
}

int main(void) {
    FAST;
    Solve();
    return 0;
}