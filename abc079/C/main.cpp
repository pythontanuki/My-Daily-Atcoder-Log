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
    int a = s[0] - '0';
    int b = s[1] - '0';
    int c = s[2] - '0';
    int d = s[3] - '0';
    if(a + b + c + d == 7){
        cout << to_string(a) + '+' + to_string(b) + '+' + to_string(c) + '+' + to_string(d) + '=' + '7' << endl;
        return 0;
    }   
    if(a + b + c - d == 7){
        cout << to_string(a) + '+' + to_string(b) + '+' + to_string(c) + '-' + to_string(d) + '=' + '7' << endl;
        return 0;
    }
    if(a + b - c + d == 7){
        cout << to_string(a) + '+' + to_string(b) + '-' + to_string(c) + '+' + to_string(d) + '=' + '7' << endl;
        return 0;
    }  
    if(a - b + c + d == 7){
        cout << to_string(a) + '-' + to_string(b) + '+' + to_string(c) + '+' + to_string(d) + '=' + '7' << endl;
        return 0;
    }
    if(a + b - c - d == 7){
        cout << to_string(a) + '+' + to_string(b) + '-' + to_string(c) + '-' + to_string(d) + '=' + '7' << endl;
        return 0;
    }   
    if(a - b - c + d == 7){
        cout << to_string(a) + '-' + to_string(b) + '-' + to_string(c) + '+' + to_string(d) + '=' + '7' << endl;
        return 0;
    }   
    if(a - b + c - d == 7){
        cout << to_string(a) + '-' + to_string(b) + '+' + to_string(c) + '-' + to_string(d) + '=' + '7' << endl;
        return 0;
    }
    if(a - b - c - d == 7){
        cout << to_string(a) + '-' + to_string(b) + '-' + to_string(c) + '-' + to_string(d) + '=' + '7' << endl;
        return 0;
    }   
}