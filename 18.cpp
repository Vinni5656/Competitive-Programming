//Problem link: https://codeforces.com/problemset/problem/797/A

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, k;
    cin>>n>>k;

    vector<int> factors;

    for(int p = 2; p * p <= n; p++) {
        while (n % p == 0) {
            factors.push_back(p);
            n /= p;
        }
    }

    if(n > 1) factors.push_back(n);

    if(factors.size() < k) {
        cout<<-1<<endl;
        return 0;
    }

    for(int i = 0; i < k - 1; i++) {
        cout<<factors[i]<<" ";
    }

    int last = 1;
    for(int i = k - 1; i < factors.size(); i++) {
        last *= factors[i];
    }

    cout<<last<<endl;

    return 0;


}

