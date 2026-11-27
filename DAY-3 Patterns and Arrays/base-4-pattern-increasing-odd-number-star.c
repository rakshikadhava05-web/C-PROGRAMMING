#include <stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row=0;row<n;row++,printf("\n"))
    {
    for(col=0;col<2*row-1;col++)
    printf("*");
    }
}