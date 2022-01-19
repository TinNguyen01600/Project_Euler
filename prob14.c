#include <stdio.h>

int main(void)
{
    unsigned int n, k;
    scanf("%d", &n);
    while (n != 1){
        if (n%2 == 0) n/=2;
        else n = 3*n + 1;
        printf("%u ", n);
    }  
}