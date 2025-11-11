//Problem link: https://codeforces.com/contest/581/problem/A

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a, b;
    cin>>a>>b;

    //no. of days he can wear different socks
    int DiffSocks = min(a, b);

    //no. of days he can wear same socks
    int SameSocks = (max(a, b) - DiffSocks )/2;

    cout<<DiffSocks<<" "<<SameSocks;

    return 0;

}