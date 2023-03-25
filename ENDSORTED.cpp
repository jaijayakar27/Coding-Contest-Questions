#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int x[n];
	    for(int j=0;j<n;j++){
	        cin>>x[j];
	    }
	    int a=0,b=0;
	    int c,d;
	    for(int j=0;j<n;j++){
	        if(x[j]==1){
	            c=j;
	        }
	        if(x[j]==n){
	            d=j;
	        }
	    }
	    a=c+n-1-d;
	    if(d<c){
	        cout<<a-1<<endl;
	    }
	    else{
	        cout<<a<<endl;
	    }
	}
	return 0;
}
