// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

// Example:

// "A man, a plan, a canal: Panama" is a palindrome.

// "race a car" is not a palindrome.

// Return 0 / 1 ( 0 for false, 1 for true ) for this problem

bool check(char ch)
{
    int a=ch;
    // cout<<a<<endl;
    if(a>=65 && a<=90 || a>=97 && a<=122 || a>=48 && a<=57)
    {
        return true;
    }
    return false;
}
int Solution::isPalindrome(string A) {
    int len=A.size(); 
    int i=0; 
    int j=len-1; 
    while(i<=j)
    {
        if(!check(A[i]))
        {
            i++;
            continue;
        }
        if(!check(A[j]))
        {
            j--;
            continue;
        }
        if(A[i]!=A[j] && abs(A[i]-A[j])!=32)
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
