#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using mint = modint998244353;
using C = complex<double>;
const int mod = 998244353;
const long long LINF = 1001002003004005006;
const int INF = 1001001001;
const double PI = acos(-1);
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
void CIN() {}
template <typename T, class... U> void CIN(T &t, U &...u) { cin >> t; CIN(u...); }
void COUT() { cout << endl; }
template <typename T, class... U, char sep = ' '> void COUT(const T &t, const U &...u) { cout << t; if (sizeof...(u)) cout << sep; COUT(u...); }
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


C input_complex() {
    double x, y;
    CIN(x,y);
    return C(x,y);
}


struct Solver {
  void Solve() {
    int n, m;
    CIN(n,m);
    vl a(n);
    ll tot = 0;
    for(auto &p : a) {
        CIN(p);
        tot += p;
    }
    S(ALL(a));
    vl s(n+1);
    s[0] = 0;
    rep(i,0,n) s[i+1] = s[i]+a[i];
    vpl bc(m);
    rep(i,0,m) CIN(bc[i].se, bc[i].fi);
    S(rALL(bc));
    int l = 0;
    ll ans = 0;
    for(auto p : bc) {
        ll b = p.se;
        ll c = p.fi;
        int ind = l+b-1;
        int r = lower_bound(ALL(a),c) - a.begin();
        if(r > l) {
            tot -= s[ind+1]-s[l];
            tot += b*c;
            l += b;
        }
        else {
            int d = r - l;
            if(d < 0) break;
            tot -= s[r]-s[l];
            tot += d*c;
            l += d;
        }
        chmax(ans,tot);
    }
    COUT(tot);
  }
};

signed main(void) {
/* This Program's Author python_tanuki */
    python_tanuki;
    int ts = 1;
    rep(ti,0,ts) {
      Solver solver;
      solver.Solve();
    }
    return 0;
}