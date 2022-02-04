#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,n;
	    cin>>x>>y;
	    z=x-y;
	    n=(2*y+z);
	    if(z!=0){
	    cout<<n<<endl;
	    }
	    else{
	    cout<<n-1;
	    cout<<endl;
	        
	    }
	}
	return 0;
}
