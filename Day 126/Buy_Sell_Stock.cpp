int Solution::maxProfit(const vector<int> &A) {
    int n = A.size();
    if(n == 0)  return 0;
    // let first element be the minimum element
    int mini = A[0];
    int profit = 0;
    
    for(int i = 1 ; i<n; i++){
        int tCost = A[i] - mini;
        profit = max(profit,tCost);
        mini = min(mini,A[i]);
    }
    return profit;
    
}
// TC - O(N)
