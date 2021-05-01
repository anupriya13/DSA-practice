int Solution::diffPossible(vector<int> &A, int B) {
    
    int n = A.size();
    int i = 0, j = 1;
    
    while(j < n && i < n-1)
    {
        if(i == j)
        j++;
        
        int diff = A[j] - A[i];
        if(diff == B)
        return 1;
        else if(diff < B)
        j++;
        else
        i++;
        
    }
    
    return 0;
}
