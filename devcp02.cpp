#include <bits/stdc++.h>
using namespace std;
#define MAX 101

void printArray(int *arr,int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(i)
            printf(" ");
        printf("%d", arr[i]);
    }
    puts("");
}

int BubbleSort(int *arr,int n)
{
    int swap_count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>=i+1; j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
                swap_count++;
            }
        }
    }
    return swap_count;
}

int arr[MAX];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    int cnt = BubbleSort(arr, n);
    printArray(arr,n);
    printf("%d\n", cnt);
    return 0;
}
