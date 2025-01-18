class Solution {
public:
double mypow1(double x, int  n)
{
    if(n==1)return x;
        if(n==0)return 1;
        double t=mypow1(x,n/2);
        return n%2==0?t*t:t*t*x;
}
    double myPow(double x, int n) {
        if(n>=0)return mypow1(x,n);
        return 1/mypow1(x,n);
    }
};