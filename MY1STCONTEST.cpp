#include <iostream>
using namespace std;
class jai{
    public:
    int n,a,b;
    int in(){
        cin>>n>>a>>b;
        return 0;
    }
    int pt(){
        int x=n-a;
        cout<<x<<" ";
        x=x-b;
        cout<<x;
        return 0;
    }
    
};
int main() {
	jai a;
	a.in();
	a.pt();
	return 0;
}
