#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++){
	    cin>>n;
	    string s;
	    char a[n];
	    cin>>s;
	    for(int j=0;j<n;j++){
	        switch(s[j]){
	            case 'A':
	               a[j]='T';
	               break;
	            case 'T':
	               a[j]='A';
	               break;
	           case 'G':
	              a[j]='C';
	              break;
	           case 'C':
	              a[j]='G';
	              break;
	        }
	    }
	    for(int x=0;x<n;x++){
	        cout<<a[x];
	    }
	    cout<<"\n";
	}
	return 0;
}
