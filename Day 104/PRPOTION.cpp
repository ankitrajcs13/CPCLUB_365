#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int r,g,b,m;
	    cin>>r>>g>>b>>m;
	    // now find the max of each
	    int rmax = 0, gmax = 0, bmax = 0;
	    for(int i = 0; i<r; i++){
	        int x;
	        cin>>x;
	        rmax = max(rmax,x);
	    }
	    for(int i = 0; i<g; i++){
	        int x;
	        cin>>x;
	        gmax = max(gmax,x);
	    }
	    for(int i = 0; i<b; i++){
	        int x;
	        cin>>x;
	        bmax = max(bmax,x);
	    }
	    // til time m
	    while(m--){
	        // check which is max
	        if(rmax >= gmax && rmax>=bmax)
	            rmax /=2;
	       else if(gmax >=rmax && gmax >=bmax)
	            gmax/=2;
	       else
	            bmax/=2;
	    }
	    if(rmax >= gmax && rmax>=bmax)
	        cout<<rmax<<endl;
	   else if(gmax >=rmax && gmax >=bmax)
	            cout<<gmax<<endl;
	       else
	            cout<<bmax<<endl;
	    
	    
	    
	}
	return 0;
}
