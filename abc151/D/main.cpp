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

const int di[] = {-1,0,1,0};
const int dj[] = {0,1,0,-1};

struct Solver {
  void Solve() {
    int h, w;
    cin >> h >> w;
    int ans = 0;
    vs G(h);
    rep(i,0,h) cin >> G[i];
    rep(si,0,h) {
        rep(sj,0,w) {
            vvi dist(h,vi(w,INF));
            queue<P> q;
            auto push = [&](int i,int j, int d) {
                if(G[i][j] == '#') return;
                if(dist[i][j] != INF) return;
                dist[i][j] = d;
                q.emplace(i,j);
            };
            push(si,sj,0);
            while(sz(q)) {
                auto v = q.front();
                q.pop();
                int i = v.fi;
                int j = v.se;
                int d = dist[i][j];
                rep(dir,0,4) {
                    int ni = i+di[dir];
                    int nj = j+dj[dir];
                    if(ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
                    if(G[ni][nj] == '#') continue;
                    push(ni,nj,d+1);
                }
            }
            rep(ti,0,h)rep(tj,0,w) {
                if(dist[ti][tj] == INF) continue;
                chmax(ans,dist[ti][tj]);
            }
        }
    }
    cout << ans << endl;
  } 
};

signed main(void) {
    snuke;
    Solver solver;
    solver.Solve();
    return 0;
}