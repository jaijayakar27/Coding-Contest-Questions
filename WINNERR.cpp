#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x[4];
	    for(int j=0;j<4;j++){
	        cin>>x[j];
	    }
	    int a,b;
	    if(x[0]>=x[1]){
	        a=x[0];
	    }
	    else{
	        a=x[1];
	    }
	    if(x[2]>=x[3]){
	        b=x[2];
	    }
	    else{
	        b=x[3];
	    }
	    if(a<b){
	        cout<<"P"<<"\n";
	    }
	    else if(a>b){
	        cout<<"Q"<<"\n";
	    }
	    else{
	        cout<<"TIE"<<"\n";
	    }
	}
	return 0;
}
