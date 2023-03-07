#include <bits/stdc++.h>
using namespace std;
void solve(){
	    int n; cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<char,int> mp;
	    for(int i = 0; i<n; i++){
	        mp[s[i]]++;
	    }
	    
	    for(auto it: mp){
	        if(it.second > 1){
	            cout<<n-2<<endl;
	            return;
	        }
	    }
	    cout<<-1<<endl;
}

int main() {
	int t; cin>>t;
	while(t--){
	    
	    solve();
	}
	return 0;
}
