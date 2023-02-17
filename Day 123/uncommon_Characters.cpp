class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
        
            int n1 = A.length();
            int n2 = B.length();
            if(n1 == 0) return B;
            if(n2 == 0) return A;
            
            unordered_map<int,int> mp1;
            unordered_map<int,int> mp2;
            
            string s = "";
            for(int i = 0; i<n1; i++){
                mp1[A[i]]++;
            }
            for(int i = 0; i<n2; i++){
                mp2[B[i]]++;
            }
            // checking that char of A is present in map of b or not
            for(int i = 0; i<n1; i++){
                if(mp2[A[i]] == 0) s += A[i];
            }
            // checking that char of B is present in map of a or not
            for(int i = 0; i<n2; i++){
                if(mp1[B[i]] == 0) s+= B[i];
            }
            
            sort(s.begin(),s.end());
            if(s.length() == 0) return "-1";
            
            // our string has duplicate characters
            string st;
            st += s[0];
            for(int i = 1; i<s.length(); i++){
                if(s[i] != s[i-1])
                    st+=s[i];
            }
            return st;
            
          
        }
};
