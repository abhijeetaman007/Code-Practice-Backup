int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int c=0;
    unsigned int n=1;
    for(int i=0;i<sizeof(unsigned int)*8;i++)
    {
        if( ((n<<i) & A)!=0)
            c=c+1;
    }
    return c;
}