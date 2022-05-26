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
   for (int i = 1; i <= n; ++i) fact[i] = fact[i-1] * i;
   ifact[n] = fact[n].inv();
   for (int i = n; i >= 1; --i) ifact[i-1] = ifact[i] * i;
}

mint operator()(int n, int k) {
   if (k < 0 || k > n) return 0;
   return fact[n] * ifact[k] * ifact[n-k];
  }
};


void Solve() {
    const int MX = 205;
    vb prime(MX, false);
    rep(i, 2, MX) {
      prime[i] = true;
      rep(j, 2, i) {
        if(i % j == 0) prime[i] = false;
      }
    }
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    srep(i, a, b) {
      bool fl = true;
      srep(j, c, d) {
        int num = i + j;
        if(prime[num]) fl = false;
      }
      if(fl) {
        cout << "Takahashi" << endl;
        return;
      }
    }
    cout << "Aoki" << endl;
    return;
}

int main(void) {
    FAST;
    Solve();
    return 0;
}