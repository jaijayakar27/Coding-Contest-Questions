#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b,c;
	for(int i=0;i<t;i++){
	    cin>>a>>b>>c;
	    int x=b*c;
	    int z=a/x;
	    if(a%x==0){
	        cout<<z<<endl;
	    }
	    else{
	        cout<<z+1<<endl;
	    }
	    
	}
	return 0;
}
