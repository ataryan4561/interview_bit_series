// Given a matrix of integers A of size N x M in which each row is sorted.

// Find an return the overall median of the matrix A.

// Note: No extra memory is allowed.

// Note: Rows are numbered from top to bottom and columns are numbered from left to right.




// Input Format

// The first and only argument given is the integer matrix A.
// Output Format

// Return the overall median of the matrix A.
// Constraints

// 1 <= N, M <= 10^5
// 1 <= N*M  <= 10^6
// 1 <= A[i] <= 10^9
// N*M is odd
// For Example

// Input 1:
//     A = [   [1, 3, 5],
//             [2, 6, 9],
//             [3, 6, 9]   ]
// Output 1:
//     5
// Explanation 1:
//     A = [1, 2, 3, 3, 5, 6, 6, 9, 9]
//     Median is 5. So, we return 5.

// Input 2:
//     A = [   [5, 17, 100]    ]
// Output 2:
//     17 ``` Matrix=

int Solution::findMedian(vector<vector<int> > &A) {
    int max_=0;
    int min_=INT_MAX;
    for(int i=0; i<A.size(); i++)
    {
        for(int j=0; j<A[i].size(); j++)
        {
            if(A[i][j]>max_)
            {
                max_=A[i][j];
            }
            if(A[i][j]<min_)
            {
                min_=A[i][j];
            }
        }
    }
    int med=(A.size()*A[0].size()+1)/2;
    // cout<<med<<endl;
    // cout<<min_<<" "<<max_<<endl;
    while(min_<=max_)
    {
        int mid=(min_+max_)/2;
        int ans=0;
        for(int i=0;i<A.size();i++)
        {
            for(int j=0; j<A[i].size(); j++)
            {
                if(A[i][j]<=mid)
                {
                    ans++;
                }
            }
        }
        // cout<<ans<<"hh"<<endl;
        if(ans<med)
        {
            min_=mid+1;
        }
        else
        max_=mid-1;
        // cout<<min_<<" "<<max_<<endl;
    }
    return min_;
}
