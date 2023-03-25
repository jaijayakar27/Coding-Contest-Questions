#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x[4];
	for(int i=0;i<t;i++){
	    cin>>x[0]>>x[1]>>x[2]>>x[3];
	    int a=x[0]-x[1]-x[2];
	    int b=x[1]+x[2];
	    int j;
	    int max();{
	        if(x[1]>x[2]){
	            j=x[1];
	        }
	        else{
	            j=x[2];
	        }
	    }
	    if(a>=x[3]){
	        cout<<0<<endl;
	    }
	    else if(a<x[3]){
	        if(a+j>=x[3]){
	            cout<<1<<endl;
	        }
	        else{
	            cout<<2<<endl;
	        }
	    }
	}
	return 0;
}
