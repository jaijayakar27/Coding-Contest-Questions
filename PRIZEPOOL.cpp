#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x[n],y[n];
	for(int i=0;i<n;i++){
	    cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++){
	    int a=(x[i]*10)+(y[i]*90);
	    cout<<a<<"\n";
	}
	return 0;
}
