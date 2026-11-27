#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%[^\n]s", arr);
    int i,c=0;
    for(i=0;arr[i]!='\0';i++)
    {
        char ch =arr[i];
        if(ch==' ')
        c++;
    }

    printf("no of words in the string %d",(c+1));
}