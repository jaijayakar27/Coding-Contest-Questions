#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a[3];
	for(int i=0;i<t;i++){
	    for(int j=0;j<3;j++){
	        cin>>a[j];
	    }
	    int p[a[0]];
	    int s=0,x=0,c=0;
	    for(int k=0;k<a[0];k++){
	        cin>>p[k];
	        
	        s=s+p[k];
	        int b[a[0]];
	        if(p[k]>a[2]){
	            b[k]=p[k]-a[2];
	        }
	        else if(p[k]<=a[2]){
	            b[k]=0;
	        }
	        x=x+b[k];
	        c=x+a[1];
	   }
	    if(s>c){
	            cout<<"COUPON"<<"\n";
	        }
	        else if(s=c){
	            cout<<"NO COUPON"<<"\n";
	        }
	        else{
	            cout<<"NO COUPON"<<"\n";
	        }
	    
	}
	return 0;
}
