#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x;
	for(int i=0;i<t;i++){
	    cin>>x;
	    int a =floor(x/100);
	    int b=x%100;
	    if(a+b<=10){
	        cout<<a+b<<endl;
	    }
	    else if(a+b>10){
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
