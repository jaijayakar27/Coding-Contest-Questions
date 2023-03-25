#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int a[n];
	    int z=0,o=0;
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	        if(a[j]==1){
	            o=o+1;
	        }
	        else{
	            z=z+1;
	        }
	    }
	    if(o%2==0&&n%2==0){
	        cout<<"YES"<<endl;
	    }
	    else if(o%2==1&&n%2==1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    //cout<<z<<" "<<o<<endl;
	    
	}
	return 0;
}
