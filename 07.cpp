//Problem link: https://codeforces.com/problemset/problem/302/A

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;

    vector<int> arr(n);
    int pos = 0;
    int neg = 0;

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        if(arr[i] == 1) pos++;
        else neg++;
    }

    vector<vector<int>> queries(m, vector<int>(2));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < 2; j++) {
            cin>>queries[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        int posDiff = (queries[i][1] - queries[i][0]) + 1 ;
        if(posDiff % 2 != 0) {
            cout<<0<<endl;
        } else {
            int need = posDiff/2;
            if(pos >= need && neg >= need) {
                cout<<1<<endl;
            } else {
                cout<<0<<endl;
            }
        }
    }

    return 0;

}