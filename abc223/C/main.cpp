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


void Solve() {
    int n;
    cin >> n;
    vector<double> a(n), b(n);
    double tot = 0;
    rep(i, 0, n) {
        cin >> a[i] >> b[i];
        tot += a[i];
    }
        
    int l = 0;
    int r = n - 1;
    double ans = 0;
    while(r - l > 1) {
        double lt = (double)a[l] / (double)b[l];
        double rt = (double)a[r] / (double) b[r];
        if(lt < rt) {
            ans += a[l];
            a[r] -=  (lt * b[r]);
            tot -= a[l];
            tot -= (lt * b[r]);
            l++;
        }
        else if(rt < lt) {
            ans += (rt * b[l]);
            a[l] -= (rt * b[l]);
            tot -= a[r];
            tot -= (rt * b[l]); 
            r--;
        } 
        else {
            ans += a[l];
            tot -= a[l];
            tot -= a[r];
            l++;
            r--;
        }
    }
    double g = a[l] / b[l];
    double h = a[r] / b[r];
    while(r != l) {
        if(g < h) {
        ans += a[l];
        tot -= a[l];
        tot -= (b[r] * g);
        a[r] -= (b[r] * g);
        l++;
    }

    else if(h < g) {
        ans += (b[l] * h);
        tot -= a[r];
        tot -= (b[l] * h);
        a[l] -= (b[l] * h);
        r--;
    }

    else {
        ans += a[l];
        printf("%.15lf\n", ans);
        return;
    }
}
    double d = tot/(b[r] + b[l]);
    ans += (d * b[l]);
    printf("%.15lf\n", ans);
}

int main(void) {
    FAST;
    Solve();
    return 0;
}