// Given an integer A.

// Compute and return the square root of A.

// If A is not a perfect square, return floor(sqrt(A)).

// DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY.

// NOTE: Do not use sort function from standard library. Users are expected to solve this in O(log(A)) time.



// Input Format
// The first and only argument given is the integer A.



// Output Format
// Return floor(sqrt(A))



// Example Input
// Input 1:

//  11
// Input 2:

//  9


// Example Output
// Output 1:

//  3
// Output 2:

//  3


// Example Explanation
// Explanation:

//  When A = 11 , square root of A = 3.316. It is not a perfect square so we return the floor which is 3.
//  When A = 9 which is a perfect square of 3, so we return 3.
#define ll long long 
int Solution::sqrt(int A) {
     ll l=1; 
     ll r=A/2; 
     ll o=A; 
     if(A==1 || A==0) 
     {
          return A; 
      } 
      int ans=1; 
      while(l<=r) 
      {
           ll mid=(l+r)/2;
            if(mid<=o/mid && (mid+1)*(mid+1)>o)
             {
                  ans=mid; 
             } else if(mid>o/mid) 
             {
                  r=mid-1; 
             } 
        l=mid+1; 
      } 
return ans; }