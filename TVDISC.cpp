#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x[4];
	for(int i=0;i<t;i++){
	    for(int j=0;j<4;j++){
	        cin>>x[j];
	    }
	    int a=x[0]-x[2];
	    int b=x[1]-x[3];
	    if(a<b){
	        cout<<"First"<<endl;
	    }
	    else if(a==b){
	        cout<<"Any"<<endl;
	    }
	    else{
	        cout<<"Second"<<endl;
	    }
	}
	return 0;
}
