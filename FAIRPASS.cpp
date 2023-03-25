#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b;
	for(int i=0;i<t;i++){
	    cin>>a>>b;
	    if(b>a){
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
