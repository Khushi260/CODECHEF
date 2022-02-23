#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n;
	    x = n/10;
	    if(n%10 == 0){
	        cout<<x<<endl;
	    }
	    else
	    cout<<x+1<<endl;
	}
	return 0;
}
