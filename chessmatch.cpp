#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,i,b,a,c,sum;
	vector<int> vec;
	
	cin>>t;
	
	while(t--){
	   cin>>a>>b>>c;
       cout<<2*(180+a)-b-c<<endl;
	}
	
	return 0;
}
