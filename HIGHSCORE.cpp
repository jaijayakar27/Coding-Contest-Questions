#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int x[4];
	    int t[n];
	        cin>>t[i];
	    for(int j=0;j<4;j++){
	        cin>>x[j];
	    }
	    for(int k=0;k<4;k++){
	        if(x[0]<x[k]){
	            x[0]=x[k];
	        }
	    }
	        cout<<x[0]<<"\n";
	    
	}
	return 0;
}
