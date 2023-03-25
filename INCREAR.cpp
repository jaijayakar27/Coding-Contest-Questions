#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x[2];
	    for(int j=0;j<2;j++){
	        cin>>x[j];
	    }
	    int d=x[0]-x[1];
	    if(x[0]<x[1]){
	        cout<<x[1]-x[0]<<"\n";
	    }
	    else if(x[0]>x[1]){
	        
	        if(d%2==1){
	            int a=((d-1)/2)+2;
	            cout<<a<<"\n";
	        }
	        else if(d%2==0){
	        int b=d/2;
	        cout<<b<<"\n";
	        }
	    }
	    else{
	        cout<<0<<"\n";
	    }
	}
	return 0;
}
