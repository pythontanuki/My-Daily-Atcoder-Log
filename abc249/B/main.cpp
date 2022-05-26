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

bool bi(char c) {
    if(c == 'A') return true;
    if(c == 'B') return true;
    if(c == 'C') return true;
    if(c == 'D') return true;
    if(c == 'E') return true;
    if(c == 'F') return true;
    if(c == 'G') return true;
    if(c == 'H') return true;
    if(c == 'I') return true;
    if(c == 'J') return true;
    if(c == 'K') return true;
    if(c == 'L') return true;
    if(c == 'M') return true;
    if(c == 'N') return true;
    if(c == 'O') return true;
    if(c == 'P') return true;
    if(c == 'Q') return true;
    if(c == 'R') return true;
    if(c == 'S') return true;
    if(c == 'T') return true;
    if(c == 'U') return true;
    if(c == 'V') return true;
    if(c == 'W') return true;
    if(c == 'X') return true;
    if(c == 'Y') return true;
    if(c == 'Z') return true;
    return false;
}

bool sm(char c) {
    if(c == 'a') return true;
    if(c == 'b') return true;
    if(c == 'c') return true;
    if(c == 'd') return true;
    if(c == 'e') return true;
    if(c == 'f') return true;
    if(c == 'g') return true;
    if(c == 'h') return true;
    if(c == 'i') return true;
    if(c == 'j') return true;
    if(c == 'k') return true;
    if(c == 'l') return true;
    if(c == 'm') return true;
    if(c == 'n') return true;
    if(c == 'o') return true;
    if(c == 'p') return true;
    if(c == 'q') return true;
    if(c == 'r') return true;
    if(c == 's') return true;
    if(c == 't') return true;
    if(c == 'u') return true;
    if(c == 'v') return true;
    if(c == 'w') return true;
    if(c == 'x') return true;
    if(c == 'y') return true;
    if(c == 'z') return true;
    return false;
}


void Solve() {
    string s;
    cin >> s;
    map<char, int> mp;
    bool big = false;
    bool small = false;
    for(char c : s) {
        mp[c]++;
        if(sm(c)) small = true;
        else if(bi(c)) big = true;
    }
    bool fl = true;
    for(auto p : mp) {
        if(p.second == 2) {
            fl = false;
            break;
        }
    }
    if(fl && small && big) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(void) {
    FAST;
    Solve();
    return 0;
}