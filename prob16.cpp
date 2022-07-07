#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int length = 10;
    int arr[10], i;
    arr[9] = 1;
    for (i = 0; i<length-1; i++){
        arr[i] = 0;
    }

    for (i = 0; i<length; i++)  cout << arr[i];
    cout << endl;

    int n = 0;
    for (int j = 0; j < 5; j++){
        for (i = length-1; i>=0; --i){
            arr[i] *= 2;
            arr[i] += n;
            if (arr[i] >= 10)  {n = 1; arr[i] %= 10;}
            else  n = 0;
        }
    }
    for (i = 0; i<length; i++)  cout << arr[i];

}