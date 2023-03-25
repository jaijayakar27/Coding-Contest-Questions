#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x,y;
	for(int i=0;i<t;i++){
	    cin>>x>>y;
	    int m=ceil((x+y)/2);
	    if(x>=y){
	        cout<<x-m<<endl;
	    }
	    else{
	        cout<<y-m<<endl;
	    }
	}
	return 0;
}
