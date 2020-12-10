#include<stdio.h>
void insertionSort(int arr[],int n)
{
    int y=1;
    while(y<=(n-1))
    {
        int e=y-1;
        int num=arr[y];
        int p=y;
        while(e>=0)
        {
            if(num>=arr[e]) break;
            arr[p]=arr[e];
            e--;
            p--;
        }
        arr[e+1]=num;
        y++;
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
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
