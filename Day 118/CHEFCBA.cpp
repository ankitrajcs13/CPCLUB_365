#include <iostream>
using namespace std;

int main() {

    float a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a/b == c/d || a/b == d/c
    || c/b == a/d || c/b == d/a 
    || b/d == a/c || b/d == c/a)
        cout<<"Possible"<<endl;
    else
        cout<<"Impossible"<<endl;
	    
	   
	
	return 0;
}
