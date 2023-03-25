#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x[3];
	for(int i=0;i<n;i++){
	    cin>>x[0]>>x[1]>>x[2];
	    if(x[2]>=x[0]&&x[2]<x[1]){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
