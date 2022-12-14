#include <stdio.h>

int solve(int n)
{
    if (n==0)
        return 0;
    else
        return n+solve(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    
    printf("%d",solve(n));
    
    return 0;    
}