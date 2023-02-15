#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int zero = 6, one = 1, two = 5, three = 5, four = 4, five = 5, six= 6, seven = 3, eight = 7, nine = 6;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int sum = a+b;
	    int n = sum;
	    int ans = 0;
	    while(n >0){
	        int dig = n % 10;
	        if(dig == 0 || dig == 6 || dig == 9) ans+= 6;
	        else if(dig == 2 || dig == 3 || dig == 5 ) ans+=5;
	        else if(dig == 4 ) ans +=4;
	        else if(dig == 7) ans+=3;
	        else if(dig == 8) ans+=7;
	        else ans+=2;
	        n /=10;
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
