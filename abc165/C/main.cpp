#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using mint = modint1000000007;
# define ll long long
# define rep(i, a, b) for(int i = a; i < b; i++)
# define ALL(obj) (obj).begin(), (obj).end()
# define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
# define _GLIBCXX_DEBUG
# define Pll pair<ll, ll>
#define P pair<int,int>
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const int mod = 1000000007;


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

//広義単調増加の数列全列挙はdfsで解くことができる

int n, m, q, ans;
vector<int> a, b, c, d;

void dfs(vector<int> k) {
    //終了条件は数列の長さが、最初にemplace_backした要素を含めてn+1になったら終了する
    if(k.size() == n + 1) {
        int now = 0;
        rep(i, 0, q) if(k[b[i]] - k[a[i]] == c[i]) now += d[i];
        chmax(ans, now);
        return;
    }
    k.emplace_back(k.back());
    while(k.back() <= m) {
        dfs(k);
        ++k.back();
    }
}

void solve() {
    cin >> n >> m >> q;
    a.resize(q);
    b.resize(q);
    c.resize(q);
    d.resize(q);
    rep(i, 0, q) cin >> a[i] >> b[i] >> c[i] >> d[i];
    vector<int> k;
    k.emplace_back(1);
    dfs(k);
    cout << ans << endl;
}

int main() {
    solve();
}