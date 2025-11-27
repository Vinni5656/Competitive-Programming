//Problem link: https://codeforces.com/contest/1855/problem/B

#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin>>n;

    long long count = 0;
    for(long long i = 1; i <= 100; ++i) {
        if(n % i == 0) {
            count = i;
        } else {
            break;
        }
    }
    cout<<count<<endl;
}

int main() {

    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}
