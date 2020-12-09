#include<stdio.h>
void bubbleSort(int arr[],int n)
{
    int m=n-2;
    while(m>=0)
    {
        int e=0;
        int f=1;
        while(e<=m)
        {
            if(arr[e]>arr[f])
            {
                int g=arr[e];
                arr[e]=arr[f];
                arr[f]=g;
            }
            f++;
            e++;
        }
        m--;
    }
}
int main()
{
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
