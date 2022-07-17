#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int *self_power(int n){
    int *result = new int [10];
    int r = 0;
    for (int i = 0; i<9; i++)   result[i] = 0;
    result[9] = 1;
    for (int j = 1; j <= n; j++){
        for (int i = 9; i>=0; --i){
        result[i] *= n;
        result[i] += r;
        if (result[i] > 9)  {r = result[i]/10; result[i] %= 10;}
        else  r = 0;
        }
    }
    return result;
}

int main(void){
    int *arr1 = new int [10];
    arr1 = self_power(5);
    for (int i = 0; i<10; i++)  cout << arr1[i];
}