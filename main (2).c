#include <stdio.h>

int solve(int n,int i)
{
    if(i>n)
        return 1;
    else
        printf("%d ",i);
        return solve(n,i+1);
}

int main()
{
    int n;
    scanf("%d",&n);
    
    solve(n,1);
    
    return 0;    
}