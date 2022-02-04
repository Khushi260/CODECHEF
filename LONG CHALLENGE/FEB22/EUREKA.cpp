#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
    while(t--){
        double n;
        cin>>n;
        double y = n * 0.143;
        double result;
        result = pow(y , n);
        cout<<round(result)<<endl;
        
    }
	return 0;
}
