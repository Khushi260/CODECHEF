#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c;
	    d=a+c;
	    if(d>b){
	        cout<<d<<endl;
	    }
	    else
	    cout<<b<<endl;
	}
	
	return 0;
}
