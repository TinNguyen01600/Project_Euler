#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    // 2^1000 has approximately over 300 digits
    int length = 350;

    int arr[350], i;
    arr[349] = 1;
    for (i = 0; i<length-1; i++){
        arr[i] = 0;
    }

    // for (i = 0; i<length; i++)  cout << arr[i];
    cout << endl;

    int n = 0;
    for (int j = 0; j < 1000; j++){
        for (i = length-1; i>=0; --i){
            arr[i] *= 2;
            arr[i] += n;
            if (arr[i] >= 10)  {n = 1; arr[i] %= 10;}
            else  n = 0;
        }
    }

    int count = 0;
    for (i = 0; i<length; i++)  count += arr[i];
    cout << count;
}