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

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long M, std::vector<std::string> A, std::vector<std::string> B){

}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<std::string> A(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> A[i];
    }
    std::vector<std::string> B(M);
    for(int i = 0 ; i < M ; i++){
        std::cin >> B[i];
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
