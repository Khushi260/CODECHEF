#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y;
	    z=21-x-y;
	    if(z>10){
	        cout<<-1<<endl;
	    }
	    else
	    cout<<z<<endl;
	}
	return 0;
}
