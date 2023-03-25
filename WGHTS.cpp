#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b,c,d;
	for(int i=0;i<t;i++){
	    cin>>a>>b>>c>>d;
	    int x=0;
	    if(b+c==a||b+d==a||d+c==a||b+c+d==a||b==a||c==a||d==a){
	        x=x+1;
	    }
	    if(x>0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
