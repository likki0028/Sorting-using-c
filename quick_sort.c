#include<stdio.h>
void print(int a[],int n);
void swap (int *a,int *b);
void qs(int a[],int start,int end);
int par(int a[],int start,int end);
int main()
{
    int i,n,a[50];
    printf("Enter number of elements:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qs(a,0,n-1);
    printf("sorted array is \n");
    print(a,n);
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void qs(int a[],int start,int end)
{
    int p;
    if(start<end)
    {
        p=par(a,start,end);
        qs(a,start,p-1);
        qs(a,p+1,end);
    }
}
int par(int a[],int start,int end)
{int pivot;
    pivot=start;
    while (start<end)
    {
        while(a[pivot]>=a[start])
        {
            start++;
        }
        while(a[pivot]<a[end])
        {
            end--;
        }
        if(start<end)
        {
            swap(&a[start],&a[end]);
        }

    }
    if(start>end)
    {
        swap(&a[pivot],&a[end]);
    }
    return end;
    
}