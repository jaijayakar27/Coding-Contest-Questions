#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int x[3];
	    for(int j=0;j<3;j++){
	        cin>>x[j];
	    }
	    int s=(x[0]*5)+(x[1]*10);
	    int o=s/x[2];
	   cout<<o<<"\n";
	}
	return 0;
}
