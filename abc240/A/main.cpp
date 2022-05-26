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
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    map<int,int> mp;
    rep(i,n){
        cin >> x[i] >> y[i];
        mp[y[i]]++;
    }
    
    string s;
    cin >> s;
    rep(i,n-1){
        if(s[i] != s[i+1]){
            int u = i + 1;
            if(mp[y[u]] >= 2){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}