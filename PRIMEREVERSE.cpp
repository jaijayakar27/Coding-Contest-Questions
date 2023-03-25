#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    string a;
	    string b;
	    cin>>a;
	    cin>>b;
	    int z1=0,z2=0;
	    for(int j=0;j<n;j++){
	        if(a[j]=='0'){
	            z1=z1+1;
	        }
	        if(b[j]=='0'){
	            z2=z2+1;
	        }
	    }
	    if(z1==z2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
