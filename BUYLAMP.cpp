#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x[4];
    for(int i=0;i<t;i++){
        cin>>x[0]>>x[1]>>x[2]>>x[3];
        int a=x[1]*x[2];
        int b=x[0]-x[1];
        int c=b*x[3];
        if(x[2]<=x[3]){
            cout<<x[0]*x[2]<<endl;
        }
        else{
            cout<<a+c<<endl;
        }
        
    }
	return 0;
}
