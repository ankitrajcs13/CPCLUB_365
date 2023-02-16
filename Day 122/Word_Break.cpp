void solve(string s, int start, string word, vector<string> &w, vector<string> &res) {
	if (start == s.size()) {
		res.push_back(word);
		return;
	}
	for (int i = start; i < s.size(); i++) {
		string currWord = s.substr(start, i - start + 1);
		for(int j = 0; j < w.size(); j++) {
			if (currWord == w[j]) {
				currWord = word + currWord;
				if (i != s.size() - 1) {
					currWord += " ";
				}
				solve(s, i + 1, currWord, w, res);
			}
		}
	}
}

vector<string> Solution::wordBreak(string A, vector<string> &B) {
    
    vector<string> res;
    string word;
    solve(A,0,word,B,res);
    return res;
    
    
}
