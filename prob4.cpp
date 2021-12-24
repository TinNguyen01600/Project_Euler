#include <iostream>
#include <windows.h>
using namespace std;

int palindrom(long int n){
    long int m = 0, temp = n;
    while (temp!=0){
        m = m*10 + temp % 10;
        temp /= 10;
    }
    return (m==n)? 1:0;
}

int main(void){
    long int k;
    for (long int i = 999; i>0; i--){
        for (long int j = i; j>0; j--){
            if(palindrom(i*j) == 1){
                cout << i*j << endl;
                exit(0);
            } 
            if (i*j <= 900000){
                break;
            }  
        }       
    }
}