//Prolem link: https://codeforces.com/problemset/problem/1421/A?mobile=true

#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {

        int a, b;
        cin>>a>>b;

        int minSum = (a ^ (a&b)) + (b ^ (a&b));

        cout<<minSum<<endl;
    }

    return 0;
}