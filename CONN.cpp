#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x;
	for(int i=0;i<t;i++){
	    cin>>x;
	    int r=x%7;
	    if(x>=14){
	        cout<<"YES"<<endl;
	    }
	    else{
	        if(r%2==0||x%2==0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
