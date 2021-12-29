#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main(void){
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i<=100; i++){
        sum1 += i*i;
        sum2 += i;
    }
    sum2 *= sum2;
    cout << sum2 - sum1;
}