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
# define vvs vector<vector<string>>
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

ll n_choose_3(ll x) {return x * (x-1) * (x-2) / 6;}

void Solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> xy(n);
    rep(i, 0, n) cin >> xy[i].first >> xy[i].second;
    ll ans = n_choose_3(n);
    sort(ALL(xy));
    rep(i, 0, n) {
        rep(j, i+1, n) {
            rep(k, j+1, n) {
                if(i == j == k) continue;
                ll x1 = xy[i].first;
                ll y1 = xy[i].second;
                ll x2 = xy[j].first;
                ll y2 = xy[j].second;
                ll x3 = xy[k].first;
                ll y3 = xy[k].second;
                if((x1-x3)*(y2-y3) == (x2-x3)*(y1-y3)) ans--;
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