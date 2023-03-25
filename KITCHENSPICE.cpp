#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n1;
	    cin>>n1;
	    if(n1<4){
	        cout<<"MILD"<<endl;
	    }
	    else if(n1>=7){
	        cout<<"HOT"<<endl;
	    }
	    else if(n1>=4&&n1<7){
	        cout<<"MEDIUM"<<endl;
	    }
	}
	return 0;
}
