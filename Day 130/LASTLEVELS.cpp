#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int t = x*y;
	    if(x % 3 == 0){
	        cout<<( t + ((x/3)-1)*z) <<endl;
	    }
	    else if( x<=3) cout<< t<<endl;
	    else{
	        cout<< ( t + (x/3)*z)<<endl;
	    }
	    
	}
	return 0;
}
