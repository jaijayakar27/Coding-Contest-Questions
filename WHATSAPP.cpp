#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
	    int n[3];
	    for(int i=0;i<3;i++){
	        cin>>n[i];
	    }
	    int x=(n[2]*n[0])-(n[2]*n[1]);
	    cout<<x<<"\n";
	}
	return 0;
}
