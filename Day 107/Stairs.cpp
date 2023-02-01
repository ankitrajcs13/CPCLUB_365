int Solution::climbStairs(int A) {
    
    int atmpt1 = 1, atmpt2 = 2;
    
    if(A == 1)
        return 1;
    
    for(int i= 2; i<A; i++){
        int atmpt = atmpt1 + atmpt2;
        atmpt1 = atmpt2;
        atmpt2 = atmpt;
    }
    return atmpt2;
    
    
}

