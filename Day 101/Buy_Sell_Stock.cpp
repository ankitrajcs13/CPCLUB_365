int Solution::maxProfit(const vector<int> &A) {
    
    vector<int> temp(A.size(), 0);
    
    int buy = A[0], flag = 0, i = 1, max_sell = INT_MIN;
    int sol = 0;
    while(i < A.size()){
        int diff = A[i] - A[i-1];
        if(diff > 0){
            sol = sol + diff;
        }
        i++;
    }
    
    return sol;
    
}
