#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    
	    int n; cin>>n;
	    
	    int arr[n];
	    for(int i = 0; i<n; i++){
	        cin>>arr[i];
	    }
	    int imin=0,imax=0;
	    // to find minimum element
        int mini=*min_element(arr,arr+n);
        // to find maximum element
        int maxi=*max_element(arr,arr+n);
        for (int i = 0; i < n; i++) {
            if(arr[i]==mini) imin=i;
            if(arr[i]==maxi) imax=i;
        }
        int ans=imin+(n-1-imax);
        if(imin>imax) ans--;
        cout << ans << endl;
	    
	}
	return 0;
}
