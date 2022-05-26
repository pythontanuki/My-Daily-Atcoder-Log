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
    int rs,cs,rt,ct;
    cin >> rs >> cs >> rt >> ct;
    --rs; --cs; --rt; --ct;
    vs g(h);
    rep(i,0,h) cin >> g[i];
    //cost,x,y,direction
    using t = tuple<int, int, int, int>;
    priority_queue<t, vector<t>, greater<>> q;
    vector<vector<vector<ll>>> dist(h,vector<vector<ll>>(w,vector<ll>(4,INF)));
    rep(i,0,4) {
      q.emplace(0,rs,cs,i);
      dist[rs][cs][i] = 0;
    }
    while(sz(q)) {
      ll cost,x,y,dir;
      tie(cost,x,y,dir) = q.top();
      q.pop();
      if(dist[x][y][dir] < cost) continue;
      rep(i,0,4) {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
        if(g[nx][ny] == '#') continue;
        if(i == dir) {
          if(cost < dist[nx][ny][i]) {
            dist[nx][ny][i] = cost+0;
            q.emplace(cost,nx,ny,i);
          }
        }
        else {
          if(cost+1 < dist[nx][ny][i]) {
            dist[nx][ny][i] = cost+1;
            q.emplace(cost+1,nx,ny,i);
          }
        }
      }
    }
    ll ans = LINF;
    rep(i,0,4) chmin(ans,dist[rt][ct][i]);
    cout << ans << endl;
  }
};

signed main(void) {
    snuke;
    Solver solver;
    solver.Solve();
    return 0;
}