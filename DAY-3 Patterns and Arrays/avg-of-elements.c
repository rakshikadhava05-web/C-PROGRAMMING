#include<stdio.h>
int main()
{
    int n,i,sum=0;//5
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)//i=0 0<5
    {
        scanf("%d",&arr[i]);//arr[0]=2
        sum=sum+arr[i];
    }
    float avg =(float)sum/n;
    printf("avg of elements: %.2f", avg);
}