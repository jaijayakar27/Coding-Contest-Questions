#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b;
	for(int i=0;i<t;i++){
	    cin>>a>>b;
	    int q=a/6;
	    int r=a%6;
	    //cout<<r<<"\n";
	    if(r!=0){
	        cout<<b*ceil(q+1)<<"\n";
	    }
	    else{
	        cout<<b*floor(q)<<"\n";
	    }
	}
	return 0;
}
