#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x[2];
	for(int i=0;i<t;i++){
	    cin>>x[0]>>x[1];
	    int a=x[0]*x[1];
	    cout<<a<<endl;
	}
	return 0;
}
