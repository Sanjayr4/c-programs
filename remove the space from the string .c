#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1001];
    fgets(s, 1001, stdin);

    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';  // Terminate the modified string

    printf("%s", s);  

    return 0;
}
