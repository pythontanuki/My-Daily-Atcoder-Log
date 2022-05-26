#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using mint = modint998244353;
const int mod = 998244353;
const long long LINF = 1001002003004005006;
const int INF = 1001001001;
const int MX = 200005;
int getint(){int x; scanf("%d",&x);return x;}
# define sz(x) (int)(x).size()
# define yes {puts("Yes"); return;}
# define no {puts("No"); return;}
# define dame {puts("-1"); return;}
# define yn {puts('Yes');} else{puts('No');}
# define ret(x) {cout << (x) << endl;}
# define ll long long
# define fi first
# define se second
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
# define pb push_back
# define ps push
# define eb emplace_back
# define em emplace
# define pob pop_back
# define rep(i, a, b) for(int i = a; i < b; i++)
# define lrep(i, a, b) for(ll i = a; i < b; i++)
# define srep(i, a, b) for(int i = a; i <= b; ++i)
# define slrep(i, a, b) for(ll i = a; i <= b; ++i)
# define drep(i, a, b) for(int i = a; i >= b; --i)
# define dlrep(i, a, b) for(ll i = a; i >= b; --i)
# define ALL(obj) (obj).begin(), (obj).end()
# define rALL(obj) (obj).rbegin(), (obj).rend()
# define snuke ios::sync_with_stdio(false); cin.tie(nullptr);
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

ll gcd (ll x, ll y) {return x ? gcd(y%x, x) : y;}

ll lcm (ll x, ll y) {return x/gcd(x,y)*y;}

mint dp[2200][2200][2];

struct Solver {
  void Solve() {
    int n, m, K, s, t, x;
    cin >> n >> m >> K >> s >> t >> x;
    --s; --t; -- x;
    vvi to(n);
    rep(i, 0, m) {
        int u, v;
        cin >> u >> v;
        --u; --v;
        to[u].pb(v);
        to[v].pb(u);
    }
    //dp[k][v][i] ; k歩歩いて頂点vにいるまでにxを通った回数のmod2がiになるような場合の数
    dp[0][s][0] = 1;
    srep(k, 0, K) rep(v, 0, n) rep(i, 0, 2) {
        for(auto u : to[v]) {
            int nk = k+1; int nv = u; int ni = i;
            if(u == x) ni ^= 1;
            dp[nk][nv][ni] += dp[k][v][i];
        }
    }
    mint ans = dp[K][t][0];
    cout << ans.val() << endl;
  }
};

signed main(void) {
    snuke;
    Solver solver;
    solver.Solve();
    return 0;
}