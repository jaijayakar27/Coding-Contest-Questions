#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
	int i;
    int x[n],y[n];
    for(i=0;i<n;i++){
            cin>>x[i]>>y[i];
        float a=y[i]-x[i];
        if(a<=0){
            cout<<"0"<<"\n";
            continue;
        }
        else if(a>0){
            a=a/8;
            a=ceil(a);
            
            cout<<a<<"\n";
        }
        }
}
