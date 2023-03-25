#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int x[n];
	    for(int j=0;j<n;j++){
	        cin>>x[j];
	    }
	    int a=0,b=0;
	    for(int j=0;j<n;j++){
	        if(x[j]==1){
	            a=a+1;
	        }
	        else if(x[j]==-1){
	            b=b+1;
	        }
	    }
	    int k=(abs(a-b))/2;
	    if(n%2==1){
	        cout<<-1<<"\n";
	    }
	    else{
	        cout<<k<<"\n";
	        
	    }
	}
	return 0;
}
