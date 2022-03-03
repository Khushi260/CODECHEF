#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,a,b,z;
	    cin>>x>>a>>b;
	    z=a+(2*b);
	    if(z>=x){
	        cout<<"Qualify"<<endl;
	    }
	    else{
	        cout<<"NotQualify"<<endl;
	    }
	}
	return 0;
}
