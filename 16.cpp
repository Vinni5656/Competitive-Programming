//PRoblem link: https://codeforces.com/problemset/problem/1866/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0; i < arr.size(); i++) {
        cin>>arr[i];
    }

    if(arr.size() == 1) {
        cout<<abs(arr[0]);
        return 0;
    }

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0) {
            cout<<0;
            return 0;
        }
    }

    int posMin = INT_MAX;
    int negMin = INT_MIN;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] < 0) {
            negMin = max(negMin, arr[i]);
        } else {
            posMin = min(posMin, arr[i]);
        }
    }

    if(negMin != INT_MIN) {
        cout<<min(posMin, abs(negMin));
    } else {
        cout<<posMin;
    }
    

    return 0;

}