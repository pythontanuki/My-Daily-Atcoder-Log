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
# define ret(x) {cout << (x) << endl; return;}
# define ll long long
# define fi first
# define se second
# define be begin
# define en end
# define vi vector<int>
# define vl vector<long long>
# define vs vector<string>
# define vb vector<bool>
# define vc vector<char>
# define vvi vector<vector<int>>
# define vvl vector<vector<long long>>
# define vvb vector<vector<bool>>
# define vvc vector<vector<char>>
# define vpi vector<pair<int, int>>
# define vpl vector<pair<ll, ll>>
# define vps vector<pair<string, string>>
# define pb push_back
# define ps push
# define eb emplace_back
# define em emplace
# define pob pop_back
# define S sort
# define N next_permutation
# define rep(i, a, b) for(int i = a; i < b; i++)
# define lrep(i, a, b) for(ll i = a; i < b; i++)
# define srep(i, a, b) for(int i = a; i <= b; ++i)
# define slrep(i, a, b) for(ll i = a; i <= b; ++i)
# define drep(i, a, b) for(int i = a; i >= b; --i)
# define dlrep(i, a, b) for(ll i = a; i >= b; --i)
# define ALL(obj) (obj).begin(), (obj).end()
# define rALL(obj) (obj).rbegin(), (obj).rend()
# define python_tanuki ios::sync_with_stdio(false); cin.tie(nullptr);
# define _GLIBCXX_DEBUG
# define Pll pair<ll, ll>
# define P pair<int,int>
void scan() {}
template <typename T, class... U> void scan(T &t, U &...u) { cin >> t; scan(u...); }
void put() { cout << endl; }
template <typename T, class... U, char sep = ' '> void put(const T &t, const U &...u) { cout << t; if (sizeof...(u)) cout << sep; put(u...); }
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


vector<pair<ll,int>> factorize(ll n) {
    vector<pair<ll,int>> res;
    for(ll i = 2; i*i <= n; ++i) {
        if(n%i) continue;
        res.eb(i,0);
        while(n%i == 0) {
            n /= i;
            res.back().se++;
        }
    }
    if(n != 1) res.eb(n,1);
    return res;
}

ll binary_pow(ll a, ll n) {
    if(n == 0) return 1;
    ll x = binary_pow(a,n/2);
    x *= x;
    if(n%2) x *= a;
    return x;
}

ll pascal[500][500];

void pascal_init() {
    pascal[0][0] = 1;
    rep(i, 0, 500) {
        rep(j, 0, i+1) {
            pascal[i+1][j] += pascal[i][j];
            pascal[i+1][j+1] += pascal[i][j];
        }
    }
}
ll a, n;
map<ll,int> ans;
const ll M = 999999;

ll func(ll n) {
    string s = to_string(n);
    string res = "";
    res += s[sz(s)-1];
    rep(i,0,sz(s)-1) res += s[i];
    ll resl = stoll(res);
    return resl;
}

void dfs(ll t, int cnt) {
   if(t > M) return;
   if(ans[t] && ans[t] <= cnt+1) return;
   if(!ans[t]) ans[t] = cnt+1;
   if(ans[t] > cnt+1) ans[t] = cnt+1;
   dfs(t*a,ans[t]);
   if(t % 10 && t > 10) dfs(func(t),ans[t]);
}

struct Solver {
  void Solve() {
    scan(a,n);
    dfs(1,0);
    if(ans[n]) put(ans[n]-1);
    else put(-1);
  }
};

signed main(void) {
/* This Program's Author python_tanuki */
    python_tanuki;
    Solver solver;
    solver.Solve();
    return 0;
}