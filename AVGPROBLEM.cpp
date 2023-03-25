#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	float a,b,c;
	for(int i=0;i<t;i++){
	    cin>>a>>b>>c;
	    float x=(a+b)/2;
	    
	    if(x>c){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
