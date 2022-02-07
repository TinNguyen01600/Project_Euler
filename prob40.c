#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//This program should be compiled by repl.it since I used brute force to solve the problem

int main(){
    int z[2000000];
    z[0] = 0;
    int count = 1;
    int a,b,c,d,e,f;
    for (int i = 1; i<=9; i++){
      z[count] = i;
      count++;
    }

    //printf("%d\n", count);

    for(int i = 10; i<=99; i++){
      a = i%10;
      b = i/10;
      z[count] = b;
      z[count+1] = a;
      count+=2;
    }

    //printf("%d\n", count);

    for(int i = 100; i<=999; i++){
      int num = i;
      a = num%10; num/=10;
      b = num%10; c = num/10;
      z[count] = c;
      z[count+1] = b;
      z[count+2] = a;
      count+=3;
    }
    
    //printf("%d\n", count);

    for (int i = 1000; i<=9999; i++){
      int num = i;
      a = num%10; num/=10;
      b = num%10; num/=10;
      c = num%10; d = num/10;
      z[count] = d;
      z[count+1] = c;
      z[count+2] = b;
      z[count+3] = a;
      count+=4;
    }

    //printf("%d\n", count);

    for (int i = 10000; i<=99999; i++){
      int num = i;
      a = num%10; num/=10;
      b = num%10; num/=10;
      c = num%10; num/=10;
      d = num%10; e = num/10;
      z[count] = e;
      z[count+1] = d;
      z[count+2] = c;
      z[count+3] = b;
      z[count+4] = a;
      count+=5;
    }

    //printf("%d\n", count);

    for (unsigned int i = 1000000; i<=1100000; i++){
      unsigned int num = i;
      a = num%10; num/=10;
      b = num%10; num/=10;
      c = num%10; num/=10;
      d = num%10; num/=10;
      e = num%10; num/=10;
      f = num/10;
      z[count] = f;
      z[count+1] = e;
      z[count+2] = d;
      z[count+3] = c;
      z[count+4] = b;
      z[count+5] = a;
      count+=6;
    }

    //printf("%d\n", count);

    printf("%d\n", z[1]);
    printf("%d\n", z[10]);
    printf("%d\n", z[100]);
    printf("%d\n", z[1000]);
    printf("%d\n", z[10000]);
    printf("%d\n", z[100000]);
    printf("%d", z[1000000]);

}