#include <iostream>
#include <algorithm>

using namespace std;

const int len = 650;

int main(void){
  long int count = 0;
  int sum[len];
  for(int i = 1; i<1000; i++){
    for (int j = 1; j<1000; j++){
      for (int k = 1; k<1000; k++){
        if((i+j+k<=1000) && (i*i + j*j == k*k)){
          //cout << i << " " << j << " " << k << endl;
          sum[count++] = i+j+k;
          //count++;
        }
      }
    }
  }
  //cout << count;
  sort(sum, sum+count);
  int index = 1;
  int max_index = 1, p;
  for(int i = 0; i<len; i++){
    //cout << sum[i] << " " << index << endl;
    if(sum[i] == sum[i+1]) index++;
    else index = 1;
    if(index > max_index)  {
      max_index = index;
      p = sum[i];
    }
  }
  cout << p;
}