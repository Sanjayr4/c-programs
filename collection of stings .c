#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    char str[101][101]; 

    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
