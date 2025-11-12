//Problem link: https://codeforces.com/problemset/problem/1703/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin>>t;

    vector<string> strings(t);

    for (int i = 0; i < t; i++) {
        int l;
        cin >> l;
        cin>>strings[i];
    }


    for (int i = 0; i < t; i++) {
        string s = strings[i];
        sort(s.begin(), s.end());
        int balloons = 0;
        for (int j = 0; j < s.length(); j++) {
            if (j > 0 && s[j] == s[j - 1]) {
                balloons += 1;
            } else {
                balloons += 2;
            }
        }

        cout << balloons << endl;
    }

    return 0;

}