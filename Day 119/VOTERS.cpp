#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	
	map<int,int> temp;

    // to store the freq of each element in map
    for(int i=0;i<n1;i++)
    {
        cin>>a;
        temp[a]++;
    }
    
    for(int i=0;i<n2;i++)
    {
        cin>>a;
        temp[a]++;
    }
    
    for(int i=0;i<n3;i++)
    {
        cin>>a;
        temp[a]++;
    }
    
    int cnt=0;
    vector<int> res;
    for(auto itr = temp.begin();itr!=temp.end();itr++){
        if(itr->second >1)
        {
            cnt++;
            res.push_back(itr->first);
        }
    }
    
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
	
	return 0;
}
