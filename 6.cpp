//Problem Link: https://codeforces.com/problemset/problem/2133/A

//In this we used hashmap beacuse the question said if we can rearrange the gears in a satisfcatory way, so we have to check if two gears have same teeth
// also the final speed depends only on the no. of teeth in first and last gear as rest of terms get canceled out

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {

    int t;
    cin>>t;

    vector<vector<int>> gears(t);

    for(int i = 0; i < t; i++) {
        int l;
        cin>>l;

        gears[i].resize(l);

        for(int j = 0; j < l; j++) {
            cin>>gears[i][j];
        }
    }

    for(int i = 0; i < t; i++) {

        unordered_map<int, int> freq;

        for(int j = 0; j < gears[i].size(); j++) {
            freq[gears[i][j]]++;
        }

        string canRearrange = "NO";
        for(auto &p : freq) {
            //p.first = gives key
            //p.second = gives value
            if (p.second >= 2) {
                canRearrange = "YES";
                break;
            }
            
        }

        cout<<canRearrange<<endl;

    }

    return 0;

}