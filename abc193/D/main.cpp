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


ll score(string s) {
    ll res = 0;
    vl tehuda(10);
    for(auto c : s) tehuda[c-'0']++;
    ll tot = 0;
    lrep(i, 1, 10) res += (i*(ll)pow(10,tehuda[i])); 
    return res;
}

void Solve() {
    int k;
    string s, t;
    cin >> k >> s >> t;
    vi c(10,k);
    rep(i, 0, 4) c[s[i]-'0']--;
    rep(i, 0, 4) c[t[i]-'0']--;
    ll cnt = 0;
    double ans = 0;
    rep(i, 1, 10) {
        rep(j, 1, 10) {
            s[4] = '0'+i;
            t[4] = '0'+j;
            if(score(s) > score(t)) {
                if(i == j) cnt += (ll)c[i] * (c[i]-1);
                else cnt += (ll)c[i]*c[j];
            }
        }
    }
    ll C = 0;
    rep(i, 1, 10) C += c[i];
    ll tot = C * (C-1);
    ans = (double)cnt/tot;
    cout << ans << endl;
}

int main(void) {
    FAST;
    Solve();
    return 0;
}