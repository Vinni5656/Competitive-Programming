//Problem link: https://codeforces.com/problemset/problem/510/A

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n, m;
    cin>>n>>m;

    vector<vector<char>> snake(n, vector<char>(m, '.'));

    //Drawing Snake
    for(int i = 0; i < n; i +=2) {
        for(int j = 0; j < m; j++) {
            snake[i][j] = '#';
        }
    }

    for(int i = 1; i < n; i +=4) {
        snake[i][m-1] = '#';
    }

    for(int i = 3; i < n; i +=4) {
        snake[i][0] = '#';
    }

    //Displaying Snake Drawing
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout<<snake[i][j];
        }
        cout<<endl;
    }

    return 0;

}