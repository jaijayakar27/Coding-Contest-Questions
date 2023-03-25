#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++){
	    cin>>n;
	    string a;
	    string b;
	    cin>>a>>b;
	    int x=0;
	    int y=0;
	    for(int j=0;j<n;j++){
	        if(a[j]=='0'){
	            x=x+1;
	        }
	    }
	    for(int j=0;j<n;j++){
	        if(b[j]=='0'){
	            y=y+1;
	        }
	    }
	    
	    int k=x-y;
	    //cout<<x<<" "<<y<<endl;
	    if(k%2==0){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	    
	}
	
	return 0;
}
