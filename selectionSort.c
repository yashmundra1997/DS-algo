#include<stdio.h>
void selectionSort(int arr[],int n)
{
    int e=0;
    while(e<=(n-2))
    {
        int m=e;
        int f=e+1;
        while(f<=(n-1))
        {
            if(arr[f]<arr[m]) m=f;
            f++;
        }
        int g=arr[e];
        arr[e]=arr[m];
        arr[m]=g;
        e++;
    }
}
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}
