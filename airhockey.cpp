#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,i,t,a,b;

    cin>>t;
    for(i=0;i<t;i++){
        cin>>a;
        cin>>b;
        
        if((7-a)>(7-b)){
            cout<<7-b<<endl;
        }
        else {
            cout<<7-a<<endl;
        }
    }
	return 0;
}
