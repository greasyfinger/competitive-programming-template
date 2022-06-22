#include <stdio.h>
#include <stdlib.h>
#define int long long
#define for(i,n) for(int i=0;i<n;i++)
signed main()
{
    int n;
    scanf("%lld",&n);
    int arr[n];
    for(i,n)
    {
        scanf("%lld",&arr[i]);
    }
    for(i,n)
    {
        printf("->%lld",arr[i]);
    }
}