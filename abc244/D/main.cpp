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

bool used[2200];

void Solve() {
    //ABC244 C-Yamanote Line Game
    // int n;
    // cin >> n;
    // int taro = 1;
    // int jiro;
    // while(1) {
    //     cout << taro << endl;
    //     used[taro] = true;
    //     cin >> jiro;
    //     if(jiro == 0) return;
    //     used[jiro] = true;
    //     while(used[taro]) taro++;
    // }
    string s1 , s2, s3, t1, t2, t3;
    cin >> s1 >> s2 >> s3 >> t1 >> t2 >> t3;
    string s = "";
    s += s1;
    s += s2;
    s += s3;
    string t = "";
    t += t1;
    t += t2;
    t += t3;
    map<string , int> mp;
    mp["RGB"] = 0;
    mp["RBG"] = 1;
    mp["GRB"] = 1;
    mp["GBR"] = 2;
    mp["BRG"] = 2;
    mp["BGR"] = 1;
    int f = mp[s];
    int b = mp[t];
    int d = abs(f - b);
    if(d % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}

signed main(void) {
    FAST;
    Solve();
    return 0;
}