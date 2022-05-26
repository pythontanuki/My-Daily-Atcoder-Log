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
# define lrep(i, a, b) for(ll i = a; i < b; i++)
# define srep(i, a, b) for(int i = a; i <= b; ++i)
# define slrep(i, a, b) for(ll i = a; i <= b; ++i)
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

int n,n2,ans;
vvi a;
vb s;

void dfs(vb s, int x) {
    int si = -1;
    rep(i,0,n2) if(!s[i]) {si = i; break;}
    if(si == -1) {
        chmax(ans,x);
        return;
    }
    s[si] = true;
    rep(i,0,n2) {
        if(!s[i] && i != si) {
            s[i] = true;
            dfs(s,x^a[si][i]);
            s[i] = false;
        }
    }
}

void Solve() {
    cin >> n;
    n2 = 2*n;
    a = vvi(n2,vi(n2));
    rep(i,0,n2) rep(j,i+1,n2) {
        cin >> a[i][j];
        a[j][i] = a[i][j];
    }
    s.resize(n2);
    dfs(s,0);
    cout << ans << endl;
}

int main(void) {
    FAST;
    Solve();
    return 0;
}