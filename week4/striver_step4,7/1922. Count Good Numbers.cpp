class Solution {
public:
int M=1e9+7;
    long long power(long long b, long long n, long long ans) {
        if(n == 0) return ans;
        if(n & 1) return power(b, n - 1, (ans * b) % M);
        else return power((b * b) % M, n / 2, ans);
    }
    int countGoodNumbers(long long n) {
        long long temp = power(20, n/2, 1);
        return (n & 1) ? (temp * 5) % M : temp;
    }
};