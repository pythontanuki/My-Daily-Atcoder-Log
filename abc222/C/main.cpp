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

bool judge(char a, char b) {
    if(a == 'G' && b == 'C') return true;
    else if(a == 'C' && b == 'P') return true;
    else if(a == 'P' && b == 'G') return true;
    return false;
}

void Solve() {
    int n, m;
    cin >> n >> m;
    int n2 = 2 * n;
    vs s(n2);
    rep(i, 0, n2) cin >> s[i];
    vector<P> d(n2);
    rep(i, 0, n2) d[i] = P(0, i);
    rep(mi, 0, m) {
        rep(ni, 0, n) {
            int i = ni * 2; int j = ni * 2 + 1;
            int hi = d[i].second;
            int hj = d[j].second;
            if(judge(s[hi][mi], s[hj][mi])) d[i].first--;
            if(judge(s[hj][mi], s[hi][mi])) d[j].first--;
        }
        sort(ALL(d));
    }
    rep(i, 0, n2) cout << d[i].second + 1 << endl;
}

int main(void) {
    FAST;
    Solve();
    return 0;
}