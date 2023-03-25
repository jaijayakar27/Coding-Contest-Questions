#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int x[n];
	    int a=0,b=0;
	    for(int i=0;i<n;i++){
	        cin>>x[i];
	        if(x[i]==0){
	            a=a+1;
	        }
	        else if(x[i]==1){
	            b=b+1;
	        }
	    }
	    if(n%2==1){
	        if(b%2==0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else if(n%2==0){
	        if(a%2==0||b%2==0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    
	    
	    
	}
	return 0;
}
