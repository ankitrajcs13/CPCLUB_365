#include <iostream>
using namespace std;
int solve(int x)
{
    int res=1;
    for(int i=2;i<=x;i++)
    {
        res*=i;
    }
    return res;
}
int main() {
	int x,n;
	cin>>x>>n; 
	int res=0;
	for(int v=0;v<n;v++)
	{
	    string s;
	    cin>>s;
	    int i=0,j=53;
	    while(i<36&&j>=36)
	    {
	        int c1=0,c2=1,n1=0;
	        while(c1<4)
	        {
	            if(s[i]=='0')
	            {
	                n1++;
	            }
	            c1++; 
	            i++;     
	        }
	        while(c2>=0)
	        {
	            if(s[j]=='0')
	            {
	                n1++;
	            }
	            c2--;j--;
	        }
	        if(n1>=x)
	        {
	            res+=solve(n1)/(solve(n1-x)*solve(x));
	        }
	    }
	}
	cout<<res<<endl;
	return 0;
	
	
	
	return 0;
}
