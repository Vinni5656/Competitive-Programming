//Problem link: https://codeforces.com/problemset/problem/2044/A

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; 
    cin>>t;

    vector<int> testcases(t, 0);

    for(int i = 0; i < t; i++) {
        cin>>testcases[i];
    }

    for(int i = 0; i < t; i++) {
        cout<<testcases[i]-1<<endl;
    }

    return 0;
}