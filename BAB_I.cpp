#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    int min=abs(a[0]);
	    for(int j=0;j<n;j++){
	        if(abs(a[j])<=min){
	            min=abs(a[j]);
	        }
	        else{
	            min=min;
	        }
	    }
	    if(min==0){
	        cout<<-1<<endl;
	    }
	    /*else if(min==1){
	        cout<<1<<endl;
	    }*/
	    else{
	        cout<<min-1<<endl;
	    }
	}
	return 0;
}
