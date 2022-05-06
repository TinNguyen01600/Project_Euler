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
            //At first I list all Pythagoras solutions under 1000 with sum <= 1000 and count how many of them
            //cout << i << " " << j << " " << k << endl;
            //count++;
            //I found that there are 650 solutions, 
            //so I set len = 650 and declare an array sum to store the solutions' sums
            sum[count++] = i+j+k;   
        }
      }
    }
  }
  //cout << count;
  sort(sum, sum+count);
  //since sum[] is sorted, all identical sums will be grouped consecutively and in ascending order
  //for ex [sum1, sum1, sum2, sum2, sum2, sum3, sum3, sum4, sum5, ...]
  int index = 1;    //count the number of times a sum appear in the sum[] array
  int max_index = 1, p;
  for(int i = 0; i<len; i++){
    //cout << sum[i] << " " << index << endl;
    if(sum[i] == sum[i+1]) index++;     //if a sum appears 4 times, 4 consecutives are equal and index += 4 
    else index = 1;                     //index is restarted when a different sum appears
    if(index > max_index)  {
      max_index = index;    //found the maximum number of times a sum appears
      p = sum[i];           //and store that sum to p
    }
  }
  cout << p;
}