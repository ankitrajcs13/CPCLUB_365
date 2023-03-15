#include <iostream>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--){
	    int n,k,s;
	    cin>>n>>k>>s;
	    int r = s- n * n;
	    cout<<r/(k-1)<<endl;
	}
	
	return 0;
}
