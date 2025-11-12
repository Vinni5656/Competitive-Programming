//Problem link: https://codeforces.com/contest/71/problem/A

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<string> words(n);

    for(int i = 0; i < n; i++) {
        cin>>words[i];
    }

    for(int i = 0; i < n; i++) {
        
        int l = words[i].length();

        if(l <= 10) {
            cout<<words[i]<<endl;
        } else {

            int count = 0;
            for(int j = 1; j < l-1; j++) {
                count++;
            }
            cout<<words[i][0]<<count<<words[i][l-1]<<endl;
        }
    }

};