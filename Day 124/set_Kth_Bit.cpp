class Solution
{
public:
    int setKthBit(int N, int K)
    {
        int left = 1 << K;
        int ans = (N| left);
        return ans;
    }
    
};
