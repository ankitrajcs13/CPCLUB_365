vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> ans;
    int n1 = strings.size();
    int n2 = queries.size();
    
    for(int i = 0; i<n2; i++){
        int cnt = 0;
        for(int j = 0; j<n1; j++){
            if(strings[j] == queries[i])// if same then increment values
                cnt++;
        }ans.push_back(cnt);
    }
    return ans;
}
// TC - O(N2)