#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long x;
	    cin>>x;
	    int i = 2;
	    int y = x;
	    int ans = 1;
	    while(i * i <= y){
	        if(x % i == 0){
	            ans = ans* i;
	        }
	        while(x % i == 0)
	            x = x/i;
	       i++;
	    }
	    if(ans == 1)
	        cout<<x<<endl;
	   else
	        cout<<x * ans <<endl;
	}
	
	return 0;
}
