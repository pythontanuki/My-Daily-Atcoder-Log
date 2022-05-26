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
    int n, q;
    cin >> n >> q;
    vi front(n, -1);
    vi back(n, -1);
    rep(qi, 0, q) {
        int type;
        cin >> type;
        if(type == 1) {
            int x, y;
            cin >> x >> y;
            --x; --y;
            front[y] = x;
            back[x] = y;
        }

        else if(type == 2) {
            int x, y;
            cin >> x >> y;
            --x; --y;
            front[y] = -1;
            back[x] = -1;
        }

        else {
            int x;
            cin >> x;
            --x;
            while(front[x] != -1) x = front[x];
            int y = x;
            int cnt = 0;
            while(y != -1) {
                cnt++;
                y = back[y];
            }
            cout << cnt << endl;
            while(x != -1) {
                cout << x + 1 << endl;
                x = back[x];
            }
        }
    }
}

int main(void) {
    FAST;
    Solve();
    return 0;
}