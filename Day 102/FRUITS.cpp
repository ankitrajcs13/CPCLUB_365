#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    
	    int mini = min(n,m);
	    int diff = mini + k;
	    int maxi = max(n,m);
	    int ans = maxi-diff;
	    if(ans<=0)
	        cout<<0<<endl;
	    else 
	        cout<<ans<<endl;
	 
	}
	return 0;
}
