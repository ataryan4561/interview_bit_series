// We define f(X, Y) as number of different corresponding bits in binary representation of X and Y. For example, f(2, 7) = 2, since binary representation of 2 and 7 are 010 and 111, respectively. The first and the third bit differ, so f(2, 7) = 2.

// You are given an array of N positive integers, A1, A2 ,…, AN. Find sum of f(Ai, Aj) for all pairs (i, j) such that 1 ≤ i, j ≤ N. Return the answer modulo 109+7.

// For example,

// A=[1, 3, 5]

// We return

// f(1, 1) + f(1, 3) + f(1, 5) + 
// f(3, 1) + f(3, 3) + f(3, 5) +
// f(5, 1) + f(5, 3) + f(5, 5) =

// 0 + 1 + 1 +
// 1 + 0 + 2 +
// 1 + 2 + 0 = 8

// tle version --------------------------------------------------O(N^2)
#define mod 1000000007
#define ll long long 
ll bitwisecal(ll A1 ,ll B1)
{
    ll count=0; 
    ll xori=A1^B1;
    while(xori)
    {
        if(xori&1)
        {
            count++;
        }
        xori=xori>>1;
    }
    //cout<<count<<"aa"<<endl;
    return count;
}
int Solution::cntBits(vector<int> &A) {
    ll ans=0;
    for(int i=0; i<A.size(); i++)
    {
        for(int j=i+1; j<A.size(); j++)
        {
            ans=ans+bitwisecal(A[i],A[j]);
            ans=ans%mod;
            //cout<<ans<<"boss"<<endl;
        }
    }
    ans=((ans*2)%mod);
    return ans;
}

// ----------------------------------------- O(N)
#define mod 1000000007
#define ll long long 
int Solution::cntBits(vector<int> &A) {
    ll ans=0;
    for(int i=0; i<32; i++)
    {
        int count=0;
        for(int j=0; j<A.size(); j++)
        {
            if(A[j]&(1<<i))
            {
                count++;
            }
        }
        ans += ((count*(A.size()-count)*2)%mod);
    }
    return ans%mod;
}
