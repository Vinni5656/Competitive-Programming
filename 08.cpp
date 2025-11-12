//Problem link: https://codeforces.com/contest/112/problem/A

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s1, s2;
    cin>>s1;
    cin>>s2;

    int l = s1.length();

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for(int i = 0; i < l; i++) {

        if(s1[i] < s2[i]) {
            cout<<"-1";
            return 0;
        } else if(s1[i] > s2[i]) {
            cout<<"1";
            return 0;
            break;
        } else {
            continue;
        }
    }

    cout<<"0";

    return 0;

}
