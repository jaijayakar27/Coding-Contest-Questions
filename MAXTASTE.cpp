#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c,d;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        int x,y;
        if(a>=b){
            x=a;
        }
        else{
            x=b;
        }
        if(c>=d){
            y=c;
        }
        else{
            y=d;
        }
        cout<<x+y<<endl;
    }
}