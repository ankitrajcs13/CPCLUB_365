#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    int s1 = 0, s2 = 0;
	    while(n--){
	        cin>>s;
	        if(s[0] == 'L') s2++;
	        else s1++;
	    }
	    cout<<s1<<" "<<s2<<endl;
	    
	}
	return 0;
}
