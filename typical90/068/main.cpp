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


void solve(long long N, long long Q, std::vector<long long> T, std::vector<long long> X, std::vector<long long> Y, std::vector<long long> V){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> T(Q);
    std::vector<long long> X(Q);
    std::vector<long long> Y(Q);
    std::vector<long long> V(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &T[i]);
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
        std::scanf("%lld", &V[i]);
    }
    solve(N, Q, std::move(T), std::move(X), std::move(Y), std::move(V));
    return 0;
}
