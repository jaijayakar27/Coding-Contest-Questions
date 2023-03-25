#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a,b;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a%2==0&&b%2==0){
            cout<<0<<endl;
        }
        else{
            if(a==1&&b==1){
                cout<<1<<endl;
            }
            else{
                if(a%2==1&&b%2==1){
                    int x=(a-1)*(b-1);
                    int z=a*b-x;
                    cout<<z<<endl;
                }
                else if(a%2==1&&b%2==0){
                    int y=(a-1)*b;
                    int k=a*b-y;
                    cout<<k<<endl;
                }
                else if(a%2==0&&b%2==1){
                    int x=(b-1)*a;
                    int z=a*b-x;
                    cout<<z<<endl;
                }
            }
        }
    }
	return 0;
}
