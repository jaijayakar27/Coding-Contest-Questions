#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,m;
	for(int i=0;i<t;i++){
	    cin>>n>>m;
	    int x=m-n;
	    if(n>m){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<x<<endl;
	    }
	}
	return 0;
}
