#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,cnt = 0;
	    cin>>x;
	    while(x>0){
	    if(x % 2 != 0)
	        cnt++;
	    x/=2;
	    }
	    cout<<cnt-1<<endl;
	}
	return 0;
}
