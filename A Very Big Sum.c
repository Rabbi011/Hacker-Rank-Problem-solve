#include<stdio.h>
int main()
{
   long long int n,i,sum=0,arr[20];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum +arr[i];
    }
    printf("%lld\n",sum);
    return 0;
}
