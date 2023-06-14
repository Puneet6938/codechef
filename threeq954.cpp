#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,x,y,z;
    
    cin>>t;
    
  while(t--){
    
    cin>>a>>b>>c;
    cin>>x>>y>>z;
       
       if(x+y+z==a+b+c){
           cout<<"Pass"<<endl;
       }
       else {
           cout<<"Fail"<<endl;
       }
   }
   
	return 0;
}
