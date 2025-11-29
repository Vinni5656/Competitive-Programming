//Problem link: https://codeforces.com/problemset/problem/2119/A

#include <iostream>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
        
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        
        if(b<a-1 && a%2!=0){
            cout<<-1<<endl;
            continue;
	    }
        
        if(b<a && a%2==0){
            cout<<-1<<endl;
		    continue;
	    }

	    if(b==a){
            cout<<0<<endl;
            continue;
		}
        
        if(b==a-1 && a%2!=0){
            cout<<y<<endl;
            continue;
	    }
        
        long long cost=0;

        while(a!=b){
            if(a%2==0){
                cost += min(x,y);
		    } else {
                cost += x;
		    }
            a++;
	    }
	    
        cout<<cost<<endl;
    }
}