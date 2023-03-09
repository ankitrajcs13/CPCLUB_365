#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int p; cin>> p;
	    
	    if(p == 1) cout<<1<<endl;
	    else if(p == 2 || p == 3) cout<<p-1<<endl;
	    else{
	        cout<<p<<endl;
	    }
	    
	}
	return 0;
}
