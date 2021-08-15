// Problem Description

// Implement pow(x, n) % d.
// In other words, given x, n and d,

// find (xn % d)

// Note that remainders on division cannot be negative. In other words, make sure the answer you return is non negative.

// Input : x = 2, n = 3, d = 3
// Output : 2


// 2^3 % 3 = 8 % 3 = 2.

 #define ll long long
 ll power (ll x,ll n,ll d)
    {
        if(n==0)
        {
            if(x==0)
            {
                return 0;
            }
            else
            return 1;
        }
        ll ans;
        ans=power(x,n/2,d)%d;
        ans=(ans*ans)%d;
        if(n%2!=0)
        {
            return (ans*x)%d;
        }
        return ans%d;
    }
int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ll ans = power(x,n,d);
    ans=ans%d;
    if(ans<0)
    return ans+d;
    else
    return ans;
}
