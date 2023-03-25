#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x[4];
	for(int i=0;i<t;i++){
	    for(int j=0;j<4;j++){
	        cin>>x[j];
	    }
	    int a=x[0]+x[1];
	    int b=x[2]+x[3];
	    if(a>=b){
	        cout<<b<<endl;
	    }
	    else{
	        cout<<a<<endl;
	    }
	    
	}
	return 0;
}
