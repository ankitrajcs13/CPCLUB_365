#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int xn;
        cin>>xn;
        int bxor = xn;
        int arrx[xn];
        for (int i = 0; i < xn; i++) {
            cin>>arrx[i];
        }
        for (int i = 1; i < xn; i++) {
            arrx[i] = arrx[i]^arrx[i-1];
            arrx[i-1]=0;
        }
        for (int i = 0; i < xn; i++) {
            if(arrx[i]!=0)
                bxor--;   
        }
        if(bxor<xn-1) cout<<"NO"<<endl;
        else if(bxor == xn-1){
            int tempx = (xn-1)%2;
            if(!tempx)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
	}
	
	
	return 0;
}
