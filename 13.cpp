//Problem link: https://codeforces.com/problemset/problem/1996/A

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
        if(testcases[i] == 2 || testcases[i] == 4) {
            cout<<1<<endl;
        } else {
            int n = testcases[i];
            if(n%4 == 0) {
                cout<<n/4<<endl;
            } else {
                int totalAnimals = (n/4) + ((n-((n/4)*4))/2);
                cout<<totalAnimals<<endl;
            }
        }
    }

    return 0;

}