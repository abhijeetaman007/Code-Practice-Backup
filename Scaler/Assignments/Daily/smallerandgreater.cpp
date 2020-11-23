int Solution::solve(vector<int> &A) {
    int max=*max_element(A.begin(),A.end());
    int min=*min_element(A.begin(),A.end());
    if(max==min)
    return 0;
    int c=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==max||A[i]==min)
        c+=1;
    }
    return A.size()-c;
}
