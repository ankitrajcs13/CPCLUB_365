class Solution {
public:
    int climbStairs(int n) {
         return fib(n);
}

int fib(int n)
{
    int a = 0, b = 1, c, i;

    for(i = 1; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
    }
};