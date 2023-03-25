#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x[2];
	for(int i=0;i<t;i++){
	    cin>>x[0]>>x[1];
	    if(x[0]>x[1]&&x[0]<=7){
	        int a=7-x[0];
	        cout<<a<<endl;
	    }
	    else if(x[1]>=x[0]&&x[1]<=7){
	        int b=7-x[1];
	        cout<<b<<endl;
	    }
	}
	return 0;
}
