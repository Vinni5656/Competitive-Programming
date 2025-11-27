//Problem link: https://codeforces.com/contest/1765/problem/M

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {

    int t;
    cin>>t;

    vector<int> testcases(t);

    for(int i = 0; i < t; i++) {
        cin>>testcases[i];
    }

    for(int i = 0; i < t; i++) {

        int n = testcases[i];
        int maxDivisor = 0;
        for(int j = 1; j * j <= n; j++) {
            if (n % j == 0) {
                
                maxDivisor = max(maxDivisor, j);
                if (n/j != n) {
                    maxDivisor = max(maxDivisor, n/j);
                }
            }
        }
        cout<<maxDivisor<<"  "<<n-maxDivisor<<endl;
    }

    return 0;
}