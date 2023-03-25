#include <iostream>
using namespace std;
int arraySortedOrNot(int arr[], int n)
{
    
    if (n == 1 || n == 0)
        return 1;
 
    if (arr[n - 1] < arr[n - 2])
        return 0;
    return arraySortedOrNot(arr, n - 1);
}
int main() {
	int t;
	cin>>t;
	int x[1];
	int n[x[0]];
	int temp=0;
	for(int i=0;i<t;i++){
	    cin>>x[0];
	    for(int j=0;j<x[0];j++){
	        cin>>n[j];
	    }
	    if(arraySortedOrNot(n,x[0])){
	        cout<<"Yes"<<"\n";
	    }
	    else{
	        cout<<"No"<<"\n";
	    }
	}
	return 0;
}
