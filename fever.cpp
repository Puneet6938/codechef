#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,i,t;
	vector<int> v;
	
	
	cin>>t;
	 
	for(i=0;i<t;i++){
	    cin>>x;
	    v.push_back(x);
	    
	    if(v[i]>98){
	        cout<<"YES"<<endl;
	    } 
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
