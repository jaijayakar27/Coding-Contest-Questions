#include <iostream>
using namespace std;

int main() {
	int x[4];
	int t=0,i;
	for(i=0;i<4;i++){
	    cin>>x[i];
	    if(x[i]>=10){
	        t=t+1;
	    }
	}
	cout<<t;
	

	return 0;
}
