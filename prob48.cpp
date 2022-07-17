#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

/*
1000^1000 is very big integer that C++ cannot handle (cannot 
use long long int), so I store its digits in an array
 */

// with n>10, 10-digit array is incorrect
// set the number of digit to 3500 because 1000^1000 has over 
// 3000 digits
const int len = 3500;

// This function only calculate and display last 10 digits of a self-power number
int *self_power(int n){
    int *result = new int [len];
    int r = 0;

    for (int i = 0; i<len-1; i++)   result[i] = 0;
    result[len-1] = 1;
    
    for (int j = 1; j <= n; j++){
        for (int i = len-1; i>=0; --i){
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
  for (int i = len-1; i>=(len-10); --i){
    result[i] = arr1[i] + arr2[i] + n;
    if(result[i] > 9)  {result[i] %= 10; n = 1;}
    else n = 0;
  }
}

int main(void){
    int *arr1 = new int [len];
    int *arr2 = new int [len];
    int *result = new int [len];
    int i, j, k;

    for (int i = len-10; i<len; i++)  arr1[i] = 0;

    // arr1 = self_power(5);
    // for (int i = 0; i<10; i++)  cout << arr1[i];
    // plus1(arr1, arr2, result);
    // for (int i = 0; i<10; i++)  cout << result[i];

    for(i = 1; i<=1000; i++){
        for (j = len-10; j<len; j++)  result[j] = 0;
        arr2 = self_power(i);
        plus1(arr1, arr2, result);
        for (k = len-10; k<len; k++)  arr1[k] = result[k];
    }
    // print out the last 10 elements
    for (i = len-10; i<len; i++)  cout << result[i];
}