#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x[2];
	for(int i=0;i<t;i++){
	    cin>>x[0]>>x[1];
	    if(x[1]>=x[0]){
	        cout<<0<<"\n";
	    }
	    else{
	        cout<<x[0]-x[1]<<"\n";
	    }
	}
	return 0;
}
