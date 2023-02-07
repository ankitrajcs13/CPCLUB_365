vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int strow=0;
        int stcol=0;
        int enrow=r-1;
        int encol=c-1;
        int total=r*c;
        int count=0;
        vector<int>ans;
        while(count<total){
            for(int i=stcol;count<total and i<=encol;i++){
                ans.push_back(matrix[strow][i]);
                count++;
            }
            strow++;
            for(int i=strow;count<total and i<=enrow;i++){
                ans.push_back(matrix[i][encol]);
                count++;
            }
            encol--;
            for(int i=encol;count<total and i>=stcol;i--){
                ans.push_back(matrix[enrow][i]);
                count++;
                
            }
            enrow--;
            for(int i=enrow;count<total and i>=strow;i--){
                ans.push_back(matrix[i][stcol]);
                count++;
            }
            stcol++;
        }
        return ans;
    }