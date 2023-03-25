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
	    int z;
	    int c=0;
	    for(int j=0;j<n;j++){
	        if(a[j]>c){
	            c=a[j];
	            z=j;
	        }
	        else if(a[j]==c){
	            if(b[j]>b[z]){
	                z=j;
	            }
	            else{
	                z=z;
	            }
	        }
	    }
	    cout<<z+1<<endl;
	}
	return 0;
}
