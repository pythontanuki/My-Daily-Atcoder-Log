#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;


void solve(long long N, long long M, long long D, std::vector<long long> r, std::vector<long long> s){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long D;
    std::scanf("%lld", &D);
    std::vector<long long> r(M+1);
    for(int i = 0 ; i < M+1 ; i++){
        std::scanf("%lld", &r[i]);
    }
    std::vector<long long> s(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &s[i]);
    }
    solve(N, M, D, std::move(r), std::move(s));
    return 0;
}
