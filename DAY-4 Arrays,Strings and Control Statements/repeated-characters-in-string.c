#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Repeated characters: ");

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(str[i] == str[j])
                break;
        }

        if(j == i)
        {
            for(k = i + 1; str[k] != '\0'; k++)
            {
                if(str[i] == str[k])
                {
                    printf("%c", str[i]);
                    break;
                }
            }
        }
    }

}
