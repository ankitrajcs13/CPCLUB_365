#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    for (int i = 0; i < n; i++) {
	        int a;
	        cin>>a;
	        if(a == 1)
	            v.push_back(i+1);
	    }
	    if(v.size() == 0){
	        cout<<-1<<endl;
	    }
	    for(int i = 0; i < (int)v.size(); i++) {
            int a;
            if(i == 0) {
                a = 0;
            }
            else {
                a = v[i - 1];
            }
            for(int j = v[i]; j > a; j--) {
                cout << j << " ";
            }
        }
        cout << endl;
	}
	
	return 0;
}
