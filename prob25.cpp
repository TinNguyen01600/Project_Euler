#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

const int len = 3;

void plus1(int arr1[], int arr2[], int result[]){
  int n = 0;
  for (int i = len-1; i>=0; --i){
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

    // int arr1[3] = {9, 9, 9};
    // int arr2[3] = {5, 5, 5};

    for (i = 0; i<len-1; i++)   arr1[i] = 0;
    arr1[len-1] = 1;
    for (i = 0; i<len-1; i++)   arr2[i] = 0;
    arr2[len-1] = 1;
    result[0] = 0;
    
    // plus1(arr1, arr2, result);
    for (i = 0; i<len; i++)  cout << result[i];
}