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

int main(void){
    FAST;
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    for(int c : b){
        for(int j = 0; j < n; ++j){
            if(c == a[j]){
                a[j] = -INF;
                break;
            }
            if(j == n-1){
            cout << "No" << endl;
            return 0;
        }
        }
    }
    cout <<  "Yes" << endl;
    return 0;
}