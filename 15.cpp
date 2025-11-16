//Problem link: https://codeforces.com/problemset/problem/2044/B

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin>>t;

    vector<string> strings(t);

    for(int i = 0; i < t; i++) {
        cin>>strings[i];
    }

    for(int i = 0; i < t; i++) {

        string s = strings[i];

        for(int j = s.length()-1; j >= 0; j--) {
            if(s[j] == 'p') {
                cout<<'q';
            } else if(s[j] == 'q') {
                cout<<'p';
            } else {
                cout<<'w';
            }
        }

        cout<<endl;
    }

    return 0;
}