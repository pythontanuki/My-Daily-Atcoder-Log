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
    int n;
    cin >> n;
    string s1 = "1";
    string s2 = s1 + '2' + s1;
    string s3 = s2 + '3' + s2;
    string s4 = s3 + '4' + s3;
    string s5 = s4 + '5' + s4;
    string s6 = s5 + '6' + s5;
    string s7 = s6 + '7' + s6;
    string s8 = s7 + '8' + s7;
    string s9 = s8 + '9' + s8;
    string s10 = s9 + 'a' + s9;
    string s11 = s10 + 'b' + s10;
    string s12 = s11 + 'c' + s11;
    string s13 = s12 + 'd' + s12;
    string s14 = s13 + 'e' + s13;
    string s15 = s14 + 'f' + s14;
    string s16 = s15 + 'g' + s15;
    if(n == 1) cout << s1 << endl;
    if(n == 2) {
        int len = s2.size();
        rep(i, 0, len-1) cout << s2[i] << " ";
        cout << s2[len-1];
    }
    if(n == 3) {
        int len = s3.size();
        rep(i, 0, len-1) cout << s3[i] << " ";
        cout << s3[len-1];
    }
    if(n == 4) {
        int len = s4.size();
        rep(i, 0, len-1) cout << s4[i] << " ";
        cout << s4[len-1];
    }
    if(n == 5) {
        int len = s5.size();
        rep(i, 0, len-1) cout << s5[i] << " ";
        cout << s5[len-1];
    }
    if(n == 6) {
        int len = s6.size();
        rep(i, 0, len-1) cout << s6[i] << " ";
        cout << s6[len-1];
    }
    if(n == 7) {
        int len = s7.size();
        rep(i, 0, len-1) cout << s7[i] << " ";
        cout << s7[len-1];
    }
    if(n == 8) {
        int len = s8.size();
        rep(i, 0, len-1) cout << s8[i] << " ";
        cout << s8[len-1];
    }
    if(n == 9) {
        int len = s9.size();
        rep(i, 0, len-1) cout << s9[i] << " ";
        cout << s9[len-1];
    }
    if(n == 10) {
        int len = s10.size();
        rep(i, 0, len-1) {
            if(s10[i] == 'a') cout << "10" << " ";
            else cout << s10[i] << " ";
        }
        cout << s10[len-1];
    }
    if(n == 11){
         int len = s11.size();
        rep(i, 0, len-1) {
            if(s11[i] == 'a') cout << "10" << " ";
            else if(s11[i] == 'b') cout << "11" << " ";
            else cout << s11[i] << " ";
        }
        cout << s11[len-1];
    }
    if(n == 12) {
        int len = s12.size();
        rep(i, 0, len-1) {
            if(s12[i] == 'a') cout << "10" << " ";
            else if(s12[i] == 'b') cout << "11" << " ";
            else if(s12[i] == 'c') cout << "12" << " ";
            else cout << s12[i] << " ";
        }
        cout << s12[len-1];
    }
    if(n == 13) {
        int len = s13.size();
        rep(i, 0, len-1) {
            if(s13[i] == 'a') cout << "10" << " ";
            else if(s13[i] == 'b') cout << "11" << " ";
            else if(s13[i] == 'c') cout << "12" << " ";
            else if(s13[i] == 'd') cout << "13" << " ";
            else cout << s13[i] << " ";
        }
        cout << s13[len-1];
    }
    if(n == 14) {
        int len = s14.size();
        rep(i, 0, len-1) {
            if(s14[i] == 'a') cout << "10" << " ";
            else if(s14[i] == 'b') cout << "11" << " ";
            else if(s14[i] == 'c') cout << "12" << " ";
            else if(s14[i] == 'd') cout << "13" << " ";
            else if(s14[i] == 'e') cout << "14" << " ";
            else cout << s14[i] << " ";
        }
        cout << s14[len-1];
    }
    if(n == 15) {
        int len = s15.size();
        rep(i, 0, len-1) {
            if(s15[i] == 'a') cout << "10" << " ";
            else if(s15[i] == 'b') cout << "11" << " ";
            else if(s15[i] == 'c') cout << "12" << " ";
            else if(s15[i] == 'd') cout << "13" << " ";
            else if(s15[i] == 'e') cout << "14" << " ";
            else if(s15[i] == 'f') cout << "15" << " ";
            else cout << s15[i] << " ";
        }
        cout << s15[len-1];
    }
    if(n == 16) {
        int len = s16.size();
        rep(i, 0, len-1) {
            if(s16[i] == 'a') cout << "10" << " ";
            else if(s16[i] == 'b') cout << "11" << " ";
            else if(s16[i] == 'c') cout << "12" << " ";
            else if(s16[i] == 'd') cout << "13" << " ";
            else if(s16[i] == 'e') cout << "14" << " ";
            else if(s16[i] == 'f') cout << "15" << " ";
            else if(s16[i] == 'g') cout << "16" << " ";
            else cout << s16[i] << " ";
        }
        cout << s16[len-1];
    }
}

int main(void) {
    FAST;
    Solve();
    return 0;
}