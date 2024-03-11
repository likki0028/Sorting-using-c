#include<stdio.h>
void print(int a[],int n);
void ms(int a[],int l,int u);
void merge(int a[],int l,int mid,int u);
int main()
{
    int a[100],n,i,l,u;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ms(a,0,n-1);
    print(a,n);
    return 0;
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
void ms(int a[],int l,int u)
{
    int mid;
    if(l<u)
    {
        mid=(l+u)/2;
        ms(a,l,mid);
        ms(a,mid+1,u);
        merge(a,l,mid,u);
    }
}
void merge(int a[],int l,int mid,int u)
{
    int i,j,k;
    int n1=mid-l+1,n2=u-mid;
    int s[100],g[100];
    for(i=0;i<n1;i++)
    {
        s[i]=a[l+i];
    }
    for(i=0;i<n2;i++)
    {
        g[i]=a[mid+1+i];
    }
    i=0;j=0;k=l;
    
    while(i<n1 && j<n2)
    {
        if(s[i]<=g[j])
        {
            a[k]=s[i];
            i++;
        }
        else{
            a[k]=g[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=s[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=g[j];
        j++;
        k++;
    }
}