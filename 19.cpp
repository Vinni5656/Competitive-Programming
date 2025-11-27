//Problem link: https://codeforces.com/problemset/problem/1909/B

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void solve(vector<long long>& a) {
    long long k = 2;
    int n = a.size();
    
    while(true) {
        set<long long> remainders;
        for(int i = 0; i < n; i++) {
            remainders.insert(a[i] % k);
        }
        
        if(remainders.size() == 2) {
            cout<<k<<endl;
            return;
        }
        k *= 2;
    }
}

int main() {
    
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int j = 0; j < n; j++) {
            cin>>a[j];
        }
        solve(a);
    }

    return 0;
}
