#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    for(int j=0;j<n;j++){
	        cin>>b[j];
	    }
	    int x=0;
	    int k[n];
	    for(int j=0;j<n;j++){
	        
	        if(a[j]!=0&&b[j]!=0){
	            x=x+1;
	        }
	        else{
	            x=0;
	        }
	        k[j]=x;
	    }
	    int z=0;
	    for(int j=0;j<n;j++){
	        if(k[j]>z){
	            z=k[j];
	        }
	    }
	    cout<<z<<endl;
	    /*for(int j=0;j<n;j++){
	        cout<<k[j]<<" ";
	    }
	    cout<<endl;*/
	}
	return 0;
}
