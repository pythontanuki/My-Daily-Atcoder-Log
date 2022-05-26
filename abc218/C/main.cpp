#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define rep(i,n) for(int i = 0; i < (n); ++i)
# define ALL(obj) (obj).begin(), (obj).end()
# define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
# define _GLIBCXX_DEBUG
# define Pll pair<ll, ll>
#define P pair<int,int>
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int INF = 1 << 30;

int n;

vector<string> rot(vector<string> a){
    vector<string> res(n, string(n, '.'));
    rep(i, n){
        rep(j, n){
            if(a[i][j] == '#'){
                res[j][n-i-1] = '#';
            }
        }
    }
    return res;
}

vector<string> normalize(vector<string> a){
    int min_i = INF;
    int min_j = INF;
    rep(i, n){
        rep(j, n){
            if(a[i][j] == '#'){
                min_i = min(min_i, i);
                min_j = min(min_j, j);
            }
        }
    }
    vector<string> res(n, string(n, '.'));
    rep(i, n){
        rep(j, n){
            if(a[i][j] == '#'){
                res[i - min_i][j - min_j] = '#';
            }
        }
    }
    return res;
}

bool same(vector<string> a, vector<string> b){
    return normalize(a) == normalize(b);
}

int main(void){
    FAST;
    cin >> n;
    vector<string> s(n);
    vector<string> t(n);
    rep(i, n) cin >> s[i];
    rep(i, n) cin >> t[i];
    rep(i, 4){
        if(same(s, t)){
            cout << "Yes" << endl;
            return 0;
        }
        t = rot(t);
    }
    cout << "No" << endl;
}