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


void solve(long long N, std::vector<long long> A, long long M, std::vector<long long> X){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &A[i]);
    }
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> X(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &X[i]);
    }
    solve(N, std::move(A), M, std::move(X));
    return 0;
}
