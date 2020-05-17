#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0,j,l,dif;
    scanf("%d",&n);
    int arr[n][n];
    l=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1 = sum1+arr[i][j];
            }
            if(j==l)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
        l--;
    }
    dif  = abs(sum1-sum2);
    printf("%d\n",dif);
    return 0;


}
