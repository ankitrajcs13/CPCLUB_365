#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l,b;
	    cin>>l>>b;
	    int n = 1000;
	    for(int i = 1; i<n; i++){
	        if(i%2 != 0){
	            // limak's turn
	            l-=i;
	            // Now check if it's < 0
	            if(l<0){
	                cout<<"Bob"<<endl;
	                break;
	            }
	                
	        }
	        else{
	            // bob's turn
	            b-=i;
	            if(b<0){
	                cout<<"Limak"<<endl;
	                break;
	            }
	        }
	            
	    }
	}
	return 0;
}
