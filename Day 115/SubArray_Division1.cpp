int birthday(vector<int> s, int d, int m) {
    int ans = 0;
    int sum = 0;
    for(int i = 0; i<s.size(); i++){
        sum = 0;
        for(int j = i; j<i+m; j++){
            sum+=s[j];
        }
        if(sum== d)
            ans++;
    }
    return ans;
}