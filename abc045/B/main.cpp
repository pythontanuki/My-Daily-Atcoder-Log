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
    string a,b,c;
    cin >> a >> b >> c;
    int l1, l2, l3;
    l1 = a.size();
    l2 = b.size();
    l3 = c.size();
    deque<char> sa, sb, sc;
    
    rep(i, l1) sa.push_back(a[i]);
    rep(i, l2) sb.push_back(b[i]);
    rep(i, l3) sc.push_back(c[i]);

    char k = sa.front();
    sa.pop_front();
    int fl = 0;

    while(1){
        if(k == 'a'){
            if(sa.size() == 0){
                fl = 0;
                break;
            }
            k = sa.front();
            sa.pop_front();
        } 
        else if(k == 'b'){
            if(sb.size() == 0){
                fl = 1;
                break;
            }
            k = sb.front();
            sb.pop_front();
        }
        else if(k == 'c'){
            if(sc.size() == 0){
                fl = 2;
                break;
            }
            k = sc.front();
            sc.pop_front();
        }
    }
    if(fl == 0){
        cout << "A" << endl;
        return 0;
    }
    else if(fl == 1){
        cout << "B" << endl;
        return 0;
    }
    else if(fl == 2){
        cout << "C" << endl;
        return 0;
    }
}