#include <stdio.h>
#define MX 100001
int arr[MX+5];
int main()
{
   // int arr[1000];
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        int v=arr[k-1];
        int idx=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<v) ++idx;


        }
        printf("%d\n",idx);
    }
    return 0;
}

