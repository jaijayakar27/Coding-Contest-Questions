#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x[3];
	for(int i=0;i<t;i++){
	    cin>>x[0]>>x[1]>>x[2];
	    int a=4*x[0]+2*x[1];
	    cout<<a<<endl;
	}
	return 0;
}
