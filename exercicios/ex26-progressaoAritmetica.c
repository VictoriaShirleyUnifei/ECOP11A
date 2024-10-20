#include <stdio.h>

int main()
{
    int a1, r, n, an, i;
    
    printf("Insira A1, r, n: \n");
    scanf("%d %d %d", &a1, &r, &n);
    
    printf("A1 = %d\n", a1);
    
    for(i = 2; i <= n; i++)
    {
        an = a1 + r * (i - 1);
        printf("A%d = %d\n", i, an);
    }
    
    return 0;
}