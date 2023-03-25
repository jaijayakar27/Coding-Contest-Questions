#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x[2];
	for(int i=0;i<n;i++){
	    cin>>x[0]>>x[1];
	    int s=x[0]+x[1];
	    if(s%2==0){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
