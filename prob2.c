#include<stdio.h>

long int fib(int a){
	if(a<1)
		return 1;
    else if (a<2)
        return 2;
	else
		return fib(a-1)+fib(a-2);
}

int main(){
	int i = 0;
    long int sum = 0;
    while (fib(i) <= 4000000){
        if (fib(i) % 2 == 0){
            sum += fib(i);
        }
        i++;
    }
    printf("%ld", sum);
}