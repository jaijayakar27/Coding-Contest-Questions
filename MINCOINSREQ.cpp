#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x;
	for(int i=0;i<t;i++){
	    cin>>x;
	    if(x<10){
	        cout<<x<<endl;
	    }
	    else{
	        cout<<x%10<<endl;
	    }
	}
	return 0;
}
