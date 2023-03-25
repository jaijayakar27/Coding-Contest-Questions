#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x[3];
    for(int i=0;i<t;i++){
        cin>>x[0]>>x[1]>>x[2];
        if(x[1]==x[2]){
            cout<<0<<endl;
        }
        else{
            int a=x[1]-x[2];
            int b=a*x[0];
            cout<<b<<endl;
        }
    }
	return 0;
}
