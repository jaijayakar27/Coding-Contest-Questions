#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	float x[5];
	for(int i=0;i<t;i++){
	    for(int j=0;j<5;j++){
	        cin>>x[j];
	    }
	    float p=(x[0]/x[3]);
	    float d=(x[0]/x[4]);
	    float cp=(p*x[1]);
	    float cd=(d*x[2]);
	    if(cp<cd){
	        cout<<"PETROL"<<endl;
	        
	    }
	    else if(cp==cd){
	        cout<<"ANY"<<endl;
	    }
	    else{
	        cout<<"DIESEL"<<endl;
	    }
	}
	return 0;
}
