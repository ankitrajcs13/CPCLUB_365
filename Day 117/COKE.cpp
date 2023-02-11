#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,k,l,r;
	    cin>>n>>m>>k>>l>>r;
	    int res = -1; 
        for (int i = 1; i <= n; i++) {
          int c, p;
          cin >> c >> p;
          int t = c;
          for (int j = 0; j < m; j++) {
            if (t > k + 1) {
              t--;
            } else if (t < k - 1) {
              t++;
            } else {
              t = k;
            }
          }
          if (t >= l && t <= r) { 
            if (res == -1) { 
              res = p;
            } else {
              res = min(res, p);
            }
          }
        }
        cout << res << endl;
	    
	    
	    
	}
	return 0;
}
