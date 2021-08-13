// Problem Description

// Given an sorted array A of size N. Find number of elements which are less than or equal to B.

// NOTE: Expected Time Complexity O(log N)



// Problem Constraints
// 1 <= N <= 106

// 1 <= A[i], B <= 109



// Input Format
// First agument is an integer array A of size N.

// Second argument is an integer B.



// Output Format
// Return an integer denoting the number of elements which are less than or equal to B.



// Example Input
// Input 1:

//  A = [1, 3, 4, 4, 6]
//  B = 4
// Input 2:

//  A = [1, 2, 5, 5]
//  B = 3


// Example Output
// Output 1:

//  4
// Output 2:

//  2


// Example Explanation
// Explanation 1:

//  Elements (1, 3, 4, 4) are less than or equal to 4.
// Explanation 2:

//  Elements (1, 2) are less than or equal to 3.

int Solution::solve(vector<int> &A, int B) {
    int n=A.size()-1;
    int l=0;
    int r=n;
    int last=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(A[mid]<=B)
        {
            last=mid;
            l=mid+1;
        }
        else if(A[mid]>B)
        {
            r=mid-1;
        }
    }
    return last+1;
}
