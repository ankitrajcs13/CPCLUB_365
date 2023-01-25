#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    unordered_map<int,int> mp;
	    for(int i = 0; i<n; i++){
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    int maxi = INT_MIN;
	    for(auto it: mp){
	        maxi = max(maxi, it.second);
	    }
	    cout<<n-maxi<<endl;
	    
	    
	}
	
	return 0;
}
