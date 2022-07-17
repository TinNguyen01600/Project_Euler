#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

/*
1000^1000 is very big integer that C++ cannot handle (cannot 
use long long int), so I store its digits in an array
 */

// This function only calculate and display last 10 digits of a self-power number
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

// This function calculate sum of last 10 digits of 2 array-numbers
void plus1(int arr1[], int arr2[], int result[]){
  int n = 0;
  for (int i = 9; i>=0; --i){
    result[i] = arr1[i] + arr2[i] + n;
    if(result[i] > 9)  {result[i] %= 10; n = 1;}
    else n = 0;
  }
}

int main(void){
    int *arr1 = new int [10];
    int *arr2 = new int [10];
    int *result = new int [10];
    int i, j, k;

    for (int i = 0; i<10; i++)  arr1[i] = 0;

    // arr1 = self_power(5);
    // for (int i = 0; i<10; i++)  cout << arr1[i];
    // plus1(arr1, arr2, result);
    // for (int i = 0; i<10; i++)  cout << result[i];

    for(i = 1; i<=10; i++){
        for (j = 0; j<10; j++)  result[j] = 0;
        arr2 = self_power(i);
        plus1(arr1, arr2, result);
        for (k = 0; k<10; k++)  arr1[k] = result[k];
    }
    for (i = 0; i<10; i++)  cout << result[i];
}