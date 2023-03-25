#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x;
	for(int i=0;i<t;i++){
	    cin>>x;
	    int y=x*10;
	    if(y>3000){
	        cout<<y<<endl;
	    }
	    else{
	        cout<<3000<<endl;
	    }
	}
	return 0;
}