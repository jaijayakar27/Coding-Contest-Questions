#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x[2];
	    cin>>x[0]>>x[1];
	    int a[x[0]];
	    int c[x[0]];
	    int sum=0;
	    for(int j=0;j<x[0];j++){
	        cin>>a[j];
	    }
	    for(int j=0;j<x[0];j++){
	        cin>>c[j];
	        if(a[j]>=x[1]){
	            sum=sum+c[j];
	        }
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
