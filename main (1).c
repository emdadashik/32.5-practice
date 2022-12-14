#include <stdio.h>

int solve(int n, int i,int arr[])
{
    int lastDigit;
    if(i==n)
        return 0;
    else
        lastDigit = arr[i]%10;
        return lastDigit+solve(n,i+1,arr);
    
}

int main()
{
    int i,n,arr[100];
    
    scanf("%d",&n);
    
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int s = solve(n,0,arr);
    printf("%d",s);

    return 0;    
}