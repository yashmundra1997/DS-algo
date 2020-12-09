#include<stdio.h>
void linearSort(int arr[],int n)
{
    int e,f;
    e=0;
    while(e<=(n-2))
    {
        f=e+1;
        while(f<=(n-1))
        {
            if(arr[f]<arr[e])
            {
                //code for swapping
                int g=arr[e];
                arr[e]=arr[f];
                arr[f]=g;
            }
            f++;
        }
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
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }
    linearSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
