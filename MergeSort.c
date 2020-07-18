#include<stdio.h>
#include<limits.h>

void merge(int A[],int p,int q,int r);
void part(int A[],int p,int r);

int main()
{
int A [20]={2,0,1,9,1,1,0,5,3,0,3,2}, n,y,z;



y=1; z=12;

part(A,0,z-1); // Pass starting from 0 to Length - 1 of Array
for(n=0;n<z;n++)
printf(" %d \n", A[n]);

    return 0;
}

void part(int A[],int p,int r)
{
    if (p<r)
    {
        int q=(p+r)/2;
        part(A,p,q);
        part(A,q+1,r);
        merge(A,p,q,r);
    }
}

void merge(int A[],int p,int q,int r)
{
    int n1=q-p+1,n2=r-q;
    int L[n1+1],R[n2+1],i,j,k;
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;

    for (i=0;i<n1;i++)
        L[i]=A[p+i];

    for (j=0;j<n2;j++)
        R[j]=A[q+j+1];

    i=0;j=0;

    for (k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }
}
