#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    long double arr[16];
    int count = 0;
    for (long double i = 2; i<=5; i++){
        for(long double j = 2; j<=5; j++){
            arr[count] = pow(i, j);
            count++;
        }
    }
    sort(arr, arr+count);
    int k = count;
    for(int i = 0; i<count; i++){
        if(arr[i] == arr[i+1])   k--;
    }
    cout << k;
}