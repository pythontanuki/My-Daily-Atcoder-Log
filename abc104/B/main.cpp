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
    string s;
    cin >> s;
    int len = s.size();
    bool ok = true;
    if(s[0] != 'A') ok = false;
    int c_cnt = 0;
    int c_ind = 0;
    for(int i = 2; i < len - 1; ++i){
        if(s[i] == 'C'){
            c_cnt++;
            c_ind = i;
        }
    }
    if(c_cnt != 1) ok = false;
    if(!ok) {
        cout << "WA" << endl;
        return 0;
    }
    if(ok){
        rep(i, len){
            if(s[i] == 'C') continue;
            if(s[i] == 'A') continue;
            if((int)s[i] < 97 || (int)s[i] > 122) ok = false;
        }
    }
    if(ok) cout << "AC" << endl;
    else cout << "WA" << endl;
}