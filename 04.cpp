//Problem link: https://codeforces.com/problemset/problem/1760/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<vector<int>> arr(n, vector<int>(3));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            cin>>arr[i][j];
        }
    }

    int maximum = 0;
    int minimum = 0;

    for(int i = 0; i < n; i++) {
        maximum = max(max(arr[i][0], arr[i][1]), arr[i][2]);
        minimum = min(min(arr[i][0], arr[i][1]), arr[i][2]);

        int median = arr[i][0] + arr[i][1] + arr[i][2] - maximum - minimum;

        cout<<median<<endl;

    }
}