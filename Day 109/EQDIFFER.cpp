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
	    for (int i = 0; i < n; i++) {
	        int x;
	        cin>>x;
	        mp[x]++;
	    }
	    if(n==1 or n==2){
	        cout<<"0\n";
	        continue;
	    }
	    int maxi=INT_MIN;
	    for(auto &i: mp){
	        maxi = max(maxi, i.second);
	    }
	    if(maxi ==1)
	        maxi++;
	        
	    cout<<n-maxi<<endl;
	}
	return 0;
}
