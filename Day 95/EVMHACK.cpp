#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,c,p,q,r;
	    cin>>a>>b>>c>>p>>q>>r;
	    
	    int totV = (p+q+r)/2;
	    
	    
	    if((p+b+c)>totV || (a+q+c) > totV || (a+b+r)>totV)
	        cout<<"YES"<<endl;
	   else
	        cout<<"NO"<<endl;
	        
	}
	
	return 0;
}
