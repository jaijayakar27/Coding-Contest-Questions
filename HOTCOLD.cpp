#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x;
	for(int i=0;i<t;i++){
	    cin>>x;
	    if(x>20){
	        cout<<"HOT"<<endl;
	    }
	    else{
	        cout<<"COLD"<<endl;
	    }
	}
	return 0;
}
