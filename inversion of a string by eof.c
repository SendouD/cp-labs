#include <stdio.h>

int main() {
    char arr[10];
    char a;
    int n = 0;
    printf("enter a string of length within 10 \n");
    while (a!= EOF) 
    {
        
        scanf("%c", &a);
        arr[n] = a;
        n++;
        if (n == 10) break;
    }

    for (int i = 9; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    return 0;
}
