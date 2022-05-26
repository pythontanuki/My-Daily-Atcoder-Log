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

const int dx[] = {-1,0,1,0};
const int dy[] = {0,-1,0,1};

struct Solver {
  void Solve() {
    int h, w;
    cin >> h >> w;
    dsu d(h*w);
    int q;
    cin >> q;
    vvb used(h, vb(w));
    rep(qi,0,q) {
      int type;
      cin >> type;
      if(type == 1) {
        int r, c;
        cin >> r >> c;
        --r; --c;
        used[r][c] = true;
        int x = r*w+c;
        rep(i,0,4) {
          int nr = r+dx[i];
          int nc = c+dy[i];
          if(nr < 0 || nc < 0 || nr >= h || nc >= w) continue;
          int y = nr*w+nc;
          if(used[nr][nc]) d.merge(x,y);
        }
      }
      else if(type == 2) {
        int ra,ca,rb,cb;
        cin >> ra >> ca >> rb >> cb;
        --ra; --ca; --rb; --cb;
        int ddx = ra*w+ca;
        int ddy = rb*w+cb;
        if(used[ra][ca] && used[rb][cb] && d.same(ddx,ddy)) cout << "Yes" << endl;
        else cout << "No" << endl;
      }
    }
  }
};

signed main(void) {
    snuke;
    Solver solver;
    solver.Solve();
    return 0;
}