#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<char,int> mp;
	    for(int i =0 ; i<n; i++){
	        mp[s[i]]++;
	    }
	    int fl = 0;
	    for(auto it: mp){
	        if(it.second % 2 != 0)
	            fl = 1;
	    }
	    if(fl == 1)
	        cout<<"NO"<<endl;
	   else
	        cout<<"YES"<<endl;
	    
	}
	return 0;
}
