#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x[4];
	for(int i=0;i<t;i++){
	    cin>>x[0]>>x[1]>>x[2]>>x[3];
	    if(x[0]==x[2]&&x[1]==x[3]){
	        cout<<3<<endl;
	    }
	    else if(x[0]==x[2]&&x[1]!=x[3]){
	        cout<<2<<endl;
	    }
	    else if(x[0]!=x[2]&&x[1]==x[3]){
	        cout<<2<<endl;
	    }
	    else if(x[0]!=x[2]&&x[1]!=x[3]){
	        cout<<1<<endl;
	    }
	}
	return 0;
}
