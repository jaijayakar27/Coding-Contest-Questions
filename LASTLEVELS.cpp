#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x[3];
	for(int i=0;i<t;i++){
	    cin>>x[0]>>x[1]>>x[2];
	    int q=ceil(x[0]/3);
	    int r=x[0]%3;
	    int a;
	    if(r==0){
	    a=x[0]*x[1]+(q-1)*x[2];
	    }
	    else{
	        a=x[0]*x[1]+q*x[2];
	    }
	        
	    cout<<a<<endl;
	}
	return 0;
}
